import PyPDF2, os
pdf_path = r"c:\Users\bijja\OneDrive\Desktop\Snist\III - II\pdfs\CSCL\CSCL_Unit_3.pdf"
output_dir = r"c:\Users\bijja\OneDrive\Desktop\Snist\III - II\pdfs\CSCL\antigravity analysis"
os.makedirs(output_dir, exist_ok=True)
with open(pdf_path, "rb") as f:
    reader = PyPDF2.PdfReader(f)
    print(f"Total pages: {len(reader.pages)}")
    all_text = []
    for i, page in enumerate(reader.pages):
        text = page.extract_text()
        if text:
            all_text.append(f"--- PAGE {i+1} ---\n{text}")
            print(f"Page {i+1}: {len(text)} chars")
    full_text = "\n\n".join(all_text)
with open(os.path.join(output_dir, "CSCL_Unit_3_extracted.txt"), "w", encoding="utf-8") as f:
    f.write(full_text)
print(f"Done: {len(full_text)} total chars")
