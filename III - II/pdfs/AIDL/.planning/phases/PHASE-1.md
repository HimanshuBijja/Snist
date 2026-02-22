# Phase 1: Core Analysis & Data Extraction

## Goal
Extract content from all AIDL PDFs and generate structured 8-mark and 2-mark question-answer sets in the `gsd-analysis/` directory.

## Tasks

### Task 1: Discovery & Mapping
- [x] Scan root and `Mid2/` directories for all PDF files.
- [x] Create a manifest of files to be processed.

### Task 2: Prompt Engineering
- [x] Design a prompt for 8-mark questions.
- [x] Design a prompt for 2-mark questions.

### Task 3: Execution - Root Directory PDFs
- [x] Process `AI_Unit-I (2).pdf` -> `gsd-analysis/AI_Unit-I_Analysis.md`
- [x] Process `AI_Unit-II.pdf` -> `gsd-analysis/AI_Unit-II_Analysis.md`
- [x] Process `AI_Unit-III.pdf` -> `gsd-analysis/AI_Unit-III_Analysis.md`
- [x] Process `AI&DL UNIT-I.pdf` -> `gsd-analysis/AIDL_Unit-I_Analysis.md`
- [x] Process `AIDL ASSIGNMENT-2 Questions.pdf` -> `gsd-analysis/AIDL_Assignment_2_Analysis.md`
- [x] Process `AIDL_GemSum.pdf` -> `gsd-analysis/AIDL_Full_Summary_Analysis.md`
- [x] Process `AIDL_summary.pdf` -> `gsd-analysis/Probabilistic_Advanced_Analysis.md`

### Task 4: Execution - Mid2 Directory PDFs
- [x] Process `Mid2/UNIT-4-main.pdf` -> `gsd-analysis/Mid2_Unit4_Analysis.md`
- [x] Process `Mid2/CNN-U-5 (1).pdf` -> `gsd-analysis/Mid2_Unit5_Analysis.md`
- [x] Process `Mid2/Reinforcement Learning-Unit-6 (1).pdf` -> `gsd-analysis/Mid2_Unit6_Analysis.md`

## Verification Criteria
- [x] Each PDF has a corresponding file in `gsd-analysis/`.
- [x] 8-mark answers have individual copy buttons.
- [x] 2-mark answers are grouped with one copy button.
- [x] Markdown files are valid and readable.
