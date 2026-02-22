"""
Converts all .pptx, .docx files to PDF and copies existing .pdf files
into a 'pdfs' output folder, preserving subfolder structure.
Uses Windows COM automation (requires Microsoft Office installed).
"""

import os
import shutil
import sys
import time

# Source directory
SRC_DIR = os.path.dirname(os.path.abspath(__file__))
OUT_DIR = os.path.join(SRC_DIR, "pdfs")

os.makedirs(OUT_DIR, exist_ok=True)


def convert_pptx_to_pdf(input_path, output_path):
    """Convert a .pptx file to PDF using PowerPoint COM."""
    import comtypes.client
    powerpoint = comtypes.client.CreateObject("PowerPoint.Application")
    powerpoint.Visible = 1
    try:
        deck = powerpoint.Presentations.Open(input_path, WithWindow=False)
        deck.SaveAs(output_path, 32)  # 32 = ppSaveAsPDF
        deck.Close()
    finally:
        powerpoint.Quit()


def convert_docx_to_pdf(input_path, output_path):
    """Convert a .docx file to PDF using Word COM."""
    import comtypes.client
    word = comtypes.client.CreateObject("Word.Application")
    word.Visible = 0
    try:
        doc = word.Documents.Open(input_path)
        doc.SaveAs(output_path, FileFormat=17)  # 17 = wdFormatPDF
        doc.Close()
    finally:
        word.Quit()


def main():
    converted = 0
    copied = 0
    errors = []

    for root, dirs, files in os.walk(SRC_DIR):
        # Skip the output directory itself
        if os.path.abspath(root).startswith(os.path.abspath(OUT_DIR)):
            continue

        # Compute relative path for subfolder structure
        rel = os.path.relpath(root, SRC_DIR)
        target_dir = os.path.join(OUT_DIR, rel) if rel != "." else OUT_DIR
        os.makedirs(target_dir, exist_ok=True)

        for fname in files:
            src_path = os.path.join(root, fname)
            name, ext = os.path.splitext(fname)
            ext_lower = ext.lower()

            if ext_lower == ".pdf":
                # Copy existing PDFs
                dst = os.path.join(target_dir, fname)
                shutil.copy2(src_path, dst)
                copied += 1
                print(f"[COPIED] {fname}")

            elif ext_lower == ".pptx":
                dst = os.path.join(target_dir, name + ".pdf")
                abs_src = os.path.abspath(src_path)
                abs_dst = os.path.abspath(dst)
                print(f"[CONVERTING PPTX] {fname} ...")
                try:
                    convert_pptx_to_pdf(abs_src, abs_dst)
                    converted += 1
                    print(f"  -> OK: {name}.pdf")
                except Exception as e:
                    errors.append((fname, str(e)))
                    print(f"  -> ERROR: {e}")

            elif ext_lower == ".docx":
                dst = os.path.join(target_dir, name + ".pdf")
                abs_src = os.path.abspath(src_path)
                abs_dst = os.path.abspath(dst)
                print(f"[CONVERTING DOCX] {fname} ...")
                try:
                    convert_docx_to_pdf(abs_src, abs_dst)
                    converted += 1
                    print(f"  -> OK: {name}.pdf")
                except Exception as e:
                    errors.append((fname, str(e)))
                    print(f"  -> ERROR: {e}")

            # Skip other file types (like this script)

    print(f"\n{'='*50}")
    print(f"Done! Converted: {converted}, Copied: {copied}")
    if errors:
        print(f"Errors ({len(errors)}):")
        for name, err in errors:
            print(f"  - {name}: {err}")
    else:
        print("No errors.")
    print(f"Output folder: {OUT_DIR}")


if __name__ == "__main__":
    main()
