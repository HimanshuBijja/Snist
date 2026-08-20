# INSTRUCTIONS — Exam Prep Workflow

**How to use:** drop this file (and `extract_sources.py`) into the subject folder with the study material, then tell Claude:

> "Read `instructions.md` in this folder and do it."

That's the whole prompt. Everything you need is below — don't ask me to re-explain it.

---

## 1. Folder convention

The working folder contains:

| File | Meaning |
|---|---|
| `blueprint.jpg` / `blueprint.png` / `blueprint.jpeg` | **The previous year's question paper.** This is the pattern to reverse-engineer. |
| `unit 1.pdf`, `unit-2.pptx`, `UNIT 3.docx`, `CC_Unit-1.1.pdf` … | **The syllabus content.** Names vary — could be units 1,2,3 or 4,5,6 or anything. Formats vary: PDF, PPTX, DOCX. |
| `instructions.md` | This file. |
| `answers.md` | **Your output.** Write it here. |

### Rules for reading the folder

1. **Read every source file in the directory.** Do not ask me which units are in the portion — whatever material is in the folder *is* the portion.
2. **Work out the unit numbers from the filenames.** `unit 1.pdf`, `UNIT-4 cc.pdf`, `CC_Unit-3.1.pdf` all encode a unit number. A unit split across two files (`1.1` + `1.2`, or `3.1` + `3.2`) is **one unit** — read **both halves**. The second half is easy to miss and usually carries half the Part-B material.
3. **`blueprint.*` is the question paper, not study material.** Read it with the Read tool (it's an image), never with the text extractor.
4. If the blueprint covers *different* units than the material in the folder (e.g. it's the Mid-2 paper covering units 4–6, but the folder holds units 1–3), that's fine and normal: **take the structure from the blueprint, take the content from the folder.** Say so in your summary, and map question numbers onto the units that are actually present.

---

## 2. Step 1 — Read the blueprint first

Before touching any source file, Read the `blueprint.*` image and extract:

- Total marks, duration, Part-A / Part-B split
- Marks per question, and how many to attempt ("answer any THREE of FOUR")
- **Which question number maps to which unit** (e.g. Q7→Unit-1, Q8→Unit-2, Q9→Unit-3, Q10 = parts a/b/c, one per unit)
- BCLL level per question (L1 = recall/short, L2 = understand/explain, L3–L4 = apply/analyse)
- The **exact verbs** used: "Define…", "Mention any two…", "Write short notes on…", "Explain in detail…", "Discuss…", "Illustrate…"

The verbs matter — "Mention any two" and "Explain in detail" want very different answers.

Also note whether Part-A questions ask **two things at once** ("Define Virtualization? What is the purpose of Hypervisor?"). If so, every Part-A answer must cover both halves.

Report this mapping back to me before writing answers.

---

## 3. Step 2 — Extract all source files

Use the helper script (same folder, or one level up):

```bash
python extract_sources.py . <scratchpad>/extracted
```

It handles `.pdf`, `.pptx`, `.docx`, `.txt`, `.md`, skips images and this file, and prints a per-file line count. **It is tested** — PDF and DOCX against real files, PPTX against a constructed sample.

If the script is missing, do it manually:

| Format | Method | Notes |
|---|---|---|
| `.pdf` | `pdftotext -layout in.pdf out.txt` | Available in Git Bash. |
| `.docx` | `python-docx` | Installed. Read paragraphs **and** tables. |
| `.pptx` | unzip + regex `<a:t>` from `ppt/slides/slideN.xml` | **`python-pptx` is NOT installed** and there's no LibreOffice or pandoc. Sort slides numerically, not alphabetically (slide10 before slide2 otherwise). |

**Then read every extracted `.txt` in full.** If a `cat` gets truncated for being large, page through it with `sed -n 'A,Bp'` until you've covered the whole file — check the line count from the script's output and make sure your ranges reach the end. Missing the tail of a file means missing whole topics.

**Content comes only from these files.** This is what I'm examined on, not general knowledge. Match their terminology and their spelling exactly.

---

## 4. Step 3 — Write `answers.md`

Write it to `answers.md` in the working folder. Required sections, in order:

1. **Exam pattern analysis** — the mapping from Step 1, plus strategy (which question to skip, time per part, whether Part-A asks two things).
2. **Solved blueprint paper** — every question from the blueprint, with its answer or a link to the answer below. Highest-value section; put it near the top.
3. **Syllabus map** — which topics live in which source file.
4. **Part-A bank** — predicted 2-mark Q&As grouped by unit, 20–35 per unit. Format: `**Q. <question>**` then a 2–4 line answer.
5. **Part-B long answers** — 5–7 per unit, each a complete 6-mark answer.
6. **Quick-fire table** — the 2-mark one-liners for the multi-part question.
7. **Revision sheet** — count-lists ("6 load-balancing algorithms", "4 tiers"), comparison tables, commonly-confused definition pairs, exam-hall tactics.

**Shape of a 6-mark answer:** definition → labelled diagram (described in text: `DIAGRAM: A → B → C`) → numbered points → one example. Bold the keyword the examiner scans for.

**If a question says "with suitable example"** — include a real worked example. Theory alone loses marks.

---

## 5. Step 4 — Publish to Google Keep

Follow this exactly. Every alternative below has been tried and failed.

### 5.1 Browser and — important — the right account

Use **Claude in Chrome** (`mcp__claude-in-chrome__*`), not the in-app browser — Keep needs my logged-in Google session.

**Always write to `white.room.ghost@gmail.com`.** This is my study account. My default/first Google account is a different one, so `keep.google.com` on its own will land you in the WRONG account.

- That account is usually at **`https://keep.google.com/u/1/`**, but **do not assume the index** — Chrome numbers accounts by sign-in order and it can change.
- **Confirm before writing anything:** `read_page` the tab and check the account button reads `white.room.ghost@gmail.com`. If `/u/1/` is someone else, try `/u/2/`, `/u/0/`, etc.
- If that account is not signed in at all, **stop and ask me to sign in.** Do not attempt it — you must never enter passwords.

### 5.1b Label every note

Notes in that account are organised by label, one per subject+mid: `CNS-Mid-1`, `LP-mid-1`, and so on. **Create and apply a matching label**, e.g. `CC-Mid-1` for Cloud Computing Mid-1.

**The efficient way:** create the label first, then open the label view

```
https://keep.google.com/u/<N>/#label/CC-Mid-1
```

and create every note from *that* view — Keep auto-applies the active label to notes created there. That beats tagging 24 notes one by one afterwards.

A label view also shows **only** these notes, which makes the grid ordering far less critical.

### 5.2 The only reliable way to get formatted content in

Typing into Keep mangles everything. **Render each note as a local HTML page, copy it, paste it in.**

```bash
cd <scratchpad>/keep && python -m http.server 8777 &
```

`navigate` force-prepends `https://`, so **`file://` URLs do not work** — you must serve over `http://localhost`.

### 5.3 The per-note recipe (single tab, one `browser_batch`)

```
navigate  http://localhost:8777/noteNN.html
wait 2
left_click (400, 200)          # focus the page
key ctrl+a
key ctrl+c
navigate  https://keep.google.com/u/<N>/#label/CC-Mid-1   # verified account + label view
wait 3
left_click (460, 120)          # "Take a note..."
wait 1
key ctrl+v                     # paste body — focus is already in the body
wait 1
key shift+Tab                  # jump to the Title field (layout-independent)
type "<note title>"
key Escape                     # saves and closes
wait 4                         # let Keep sync BEFORE navigating away
```

3 notes per batch works well. Screenshot at unit boundaries to verify.

**Do not shorten that final wait.** Navigating away too early triggers the "Leave site?" dialog, and the note is lost.

### 5.4 Gotchas — all of these actually happened

| Problem | Cause | Fix |
|---|---|---|
| Body saves empty, only title | Typing/clicking into the **composer** body silently fails | Paste (`ctrl+v`) immediately after opening the composer, while focus is still in the body |
| Clicking the body by `ref` does nothing | Keep's body is a `combobox` that ignores ref-clicks | Use coordinates, or don't click at all |
| Title text lands in the body | The composer grows as content is pasted, so the title's coordinates move | **`shift+Tab`** from the body — works at any size |
| `- item` becomes `- - item`, blank lines vanish | Keep auto-converts `-`, `•`, `*`, `1.` at line start into a live list and auto-continues it | **Never start a line with a list marker.** Use `<p><b>LABEL:</b> text</p>` |
| Pasted markdown shows literal `**bold**` | Markdown isn't rich text | Paste **rendered HTML**, never raw markdown |
| `ctrl+a` in the note body doesn't select | Contenteditable quirk | Don't try to clear and rewrite — get it right first time, or delete the note and redo |
| An image pasted instead of text | Cross-tab clipboard: keyboard focus follows the real foreground tab | Use **one tab** for both copy and paste |
| `ctrl+shift+1` types a literal "1" | Keep has **no heading shortcuts** | Headings only via toolbar buttons or pasted `<h1>`/`<h2>` |
| Navigation blocked by "Leave site?" | Keep hadn't synced the note yet | **Wait 4–5s and retry the navigation.** Do NOT reach for `force: true` — it discards the unsaved note and you silently lose it. (This actually happened: one note vanished and had to be recreated, which then broke the ordering.) |
| A note is missing after a bulk run | Silent save failure, usually the one right before a forced navigation | **Always inventory at the end** — widen the window (`resize_window` ~1530x840) and scroll the label view, counting titles against your list |
| Page zoom to fit more notes | Not supported by the tool | Verify by scrolling or by searching |

`ctrl+b` **does** work for inline bold while typing.

### 5.5 Formatting rules for the HTML

- **Never use `<h1>`** — far too big in Keep. Question heading = `<h2>`; sub-headings = `<p><b>…</b></p>`.
- Blank line between blocks: `<p>&nbsp;</p>`. Plain `<p>` renders tight with no gap.
- **Leave a blank line after every answer.** Non-negotiable.
- Questions must be **bold and clearly distinct** from answers.
- Supported tags: `<h1>`, `<h2>`, `<b>`, `<i>`, `<u>`. **Tables do not survive** — flatten them into bold-label lines.
- Preserve symbols and formulas as real characters (Ω, →, subscripts). Escape `<` and `>` as `&lt;` / `&gt;` so things like `<the,1>` don't disappear.

### 5.6 Note structure

- **One note per long answer.** Title = short question label, e.g. `Q7 U1 - Virtualization and Hypervisors`. Body = the full answer.
- **One note per unit for all its 2-mark answers.** Title = `UNIT 1 - 2 Mark Short Answers`.
- **The multi-part question (Q10 or equivalent) gets its own note** — its parts are 2-mark, so it belongs with the short answers.
- **After each unit's long answers, a separator note**: title and body = the unit name, followed by ~10 blank lines so it reads as a visual break in the grid.

### 5.7 Ordering — decide this BEFORE creating anything

Keep sorts unpinned notes **newest first**, ordered by **creation time**:

> **The note created LAST appears FIRST.**

So to get a desired top-to-bottom order, **create in reverse of that order.** Getting this wrong means deleting and recreating every note, which isn't worth it.

**My preferred order (top to bottom):**

1. Short answers — Unit 1, Unit 2, Unit 3, then the multi-part question note
2. Long answers — Unit 1 (Q7 set) → `UNIT 1` separator → Unit 2 (Q8 set) → `UNIT 2` separator → Unit 3 (Q9 set) → `UNIT 3` separator

**The rule that always works:** write out the final order you want, then **create bottom-to-top**. Everything reverses — the unit order, the answers within each unit, and the separators.

Note that each separator displays *after* its unit's answers, so it must be **created before them**.

**Full creation sequence for the order above:**

1. `UNIT 3` separator
2. Unit-3 long answers, reversed: Q9-E, Q9-D, Q9-C, Q9-B, Q9-A
3. `UNIT 2` separator
4. Unit-2 long answers, reversed: Q8-F, Q8-E, Q8-D, Q8-C, Q8-B, Q8-A
5. `UNIT 1` separator
6. Unit-1 long answers, reversed: Q7-F, Q7-E, Q7-D, Q7-C, Q7-B, Q7-A
7. The multi-part note (Q10)
8. Unit 3 short answers
9. Unit 2 short answers
10. Unit 1 short answers — **created last, so it lands on top**

Summarised: **long answers first (units 3→2→1, reversed inside each), then the short answers in reverse (Q10, U3, U2, U1).**

Practical tip: name the HTML files in **creation order** (`note01.html` … `noteNN.html`) so the build loop is just a counter, and keep a filename → note-title map alongside them.

---

## 6. Working style I expect

- **Verify, don't assume.** Open a note and confirm the body actually saved before creating twenty more. Silent failures are the norm here.
- Do **one note end-to-end first**, check it, then mass-produce.
- Batch independent browser actions into one `browser_batch` call.
- Keep working files (`.txt`, `.html`, `.py`) in the scratchpad. Only `answers.md` goes in my folder.
- Tell me plainly when something fails and what you changed — don't silently retry.
- If I send a correction mid-run, apply it going forward; don't redo finished work unless I ask.
- **Kill the HTTP server when done.**

---

## 7. Checklist

- [ ] List the folder; identify `blueprint.*` and every source file
- [ ] Read the blueprint; extract pattern + question-to-unit mapping; report it to me
- [ ] `python extract_sources.py . <scratchpad>/extracted`
- [ ] Read every extracted `.txt` **in full** (page through large ones to the last line)
- [ ] Write `answers.md` with all 7 sections
- [ ] Build the note HTML pages, ordered per §5.7 (**reverse** of desired display)
- [ ] Start `python -m http.server 8777`
- [ ] **Confirm the Keep tab is `white.room.ghost@gmail.com`** (§5.1) — check the account button, don't assume `/u/1/`
- [ ] Create the `<SUBJECT>-Mid-<N>` label and work from its label view so notes auto-tag
- [ ] Create ONE note; verify body, title, label and formatting
- [ ] Mass-produce, screenshotting at unit boundaries
- [ ] Kill the HTTP server
