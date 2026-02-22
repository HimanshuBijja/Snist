# Requirements - AIDL Analysis

## Functional Requirements
1. **PDF Processing**: 
   - Extract text/content from each PDF file in the root directory.
   - Handle potential image-based content or complex layouts.
2. **Analysis Generation**:
   - Identify "Important 8-mark" questions and answers based on syllabus/content.
   - Identify "Important 2-mark" questions and answers.
3. **Output Formatting**:
   - Each PDF must result in a unique `.md` file in `gsd-analysis/`.
   - 8-mark answers must include a "Copy" button/mechanism.
   - 2-mark answers must be grouped with a single "Copy" button.
4. **Directory Structure**:
   - All results stored in `gsd-analysis/`.

## Non-Functional Requirements
- **Accuracy**: Answers should be technically correct based on the provided PDFs.
- **Readability**: Generated markdown should be well-formatted.
- **Ease of Use**: Copy buttons should work in standard markdown viewers (using HTML `<button>` or similar).

## Constraints
- Operating on Windows 10/11 environment.
- No external APIs other than what's available via Gemini CLI.
