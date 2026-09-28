# Max Heap vs Linear Search

**Assignment:** Finding the highest student score with a Max Heap and Linear Search

Scores: `78, 92, 65, 88, 95, 72, 84, 90`

## Contents

- `source_code/max_heap.c` — inserts all scores into a Max Heap, prints each insertion state, and reports insertion comparisons and maximum lookup work.
- `source_code/linear_search.c` — scans the scores to find the maximum and counts score comparisons.
- `input/input.txt` — input values used by the programs.
- `output/output.txt` — sample output from both programs.
- `trace_table/trace_table.md` — insertion-by-insertion heap trace.
- `complexity/complexity_analysis.md` — time and space complexity.
- `comparison/comparison_table.md` — side-by-side comparison and conclusion.

## Compile and run

From the project folder, compile with a C compiler such as GCC:

```sh
gcc source_code/max_heap.c -o max_heap
./max_heap
gcc source_code/linear_search.c -o linear_search
./linear_search
```

On Windows, run `max_heap.exe` and `linear_search.exe` after compilation. The scores are included in each standalone program so both can be compiled and run directly.

## Result

Both methods find **95**. Linear Search uses 7 score comparisons for this input. The heap uses 0 key comparisons to read the root (one root access); inserting all eight values took 11 parent-child key comparisons.

## GitHub

Create a new GitHub repository, extract this ZIP, and upload the included folders and this README. Then copy the repository's URL to your assignment submission.
