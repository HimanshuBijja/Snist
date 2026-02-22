import subprocess
import sys

try:
    from PyPDF2 import PdfReader
except ImportError:
    subprocess.check_call([sys.executable, '-m', 'pip', 'install', 'PyPDF2'])
    from PyPDF2 import PdfReader

pdf_path = r"c:\Users\bijja\OneDrive\Desktop\Snist\III - II\pdfs\AIDL\AI_Unit-I (2).pdf"
out_path = r"c:\Users\bijja\OneDrive\Desktop\Snist\III - II\pdfs\AIDL\AI_Unit1_text.txt"

reader = PdfReader(pdf_path)
text = ""
for i, page in enumerate(reader.pages):
    t = page.extract_text()
    if t:
        text += f"\n--- Page {i+1} ---\n{t}"

with open(out_path, 'w', encoding='utf-8') as f:
    f.write(text)

print(f"Done: {len(reader.pages)} pages, {len(text)} chars")
