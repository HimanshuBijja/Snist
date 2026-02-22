import PyPDF2
import os

pdf_path = r"c:\Users\bijja\OneDrive\Desktop\Snist\III - II\pdfs\CSCL\CSCL_Unit_1.pdf"
output_dir = r"c:\Users\bijja\OneDrive\Desktop\Snist\III - II\pdfs\CSCL\antigravity analysis"
output_file = os.path.join(output_dir, "CSCL_Unit_1_extracted.txt")

# Create output directory if it doesn't exist
os.makedirs(output_dir, exist_ok=True)

# Extract text from PDF
with open(pdf_path, "rb") as f:
    reader = PyPDF2.PdfReader(f)
    total_pages = len(reader.pages)
    print(f"Total pages: {total_pages}")
    
    all_text = []
    for i, page in enumerate(reader.pages):
        text = page.extract_text()
        if text:
            all_text.append(f"--- PAGE {i+1} ---\n{text}")
            print(f"Page {i+1}: extracted {len(text)} characters")
        else:
            print(f"Page {i+1}: no text found")
    
    full_text = "\n\n".join(all_text)

# Write to output file
with open(output_file, "w", encoding="utf-8") as f:
    f.write(full_text)

print(f"\nExtraction complete! Saved to: {output_file}")
print(f"Total characters extracted: {len(full_text)}")
