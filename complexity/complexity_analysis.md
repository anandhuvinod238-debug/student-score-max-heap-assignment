# Complexity Analysis

Let `n` be the number of student scores.

| Operation | Max Heap | Linear Search / unsorted array |
|---|---|---|
| Build using repeated insertions | `O(n log n)` time; `O(n)` space | Store the scores in `O(n)` space; no preprocessing required |
| Build using bottom-up heap construction | `O(n)` time; `O(n)` space | Not applicable |
| Find maximum once | `O(1)` time (read root); `O(1)` extra space | `O(n)` time; `O(1)` extra space |
| Insert one new score | `O(log n)` worst-case time; `O(1)` auxiliary space | `O(1)` amortized append to a dynamic array, assuming capacity; `O(1)` extra space |
| Find maximum again after insertion | `O(1)` time | `O(n)` time if rescanning is needed |
| Increase number of scores by one, including keeping maximum current | `O(log n)` worst-case insertion; root remains available | `O(1)` append plus `O(n)` scan, or `O(1)` update if a separate running maximum is maintained |

For a heap, the array stores `n` values, so total storage is `O(n)`. For a scan, the input array also occupies `O(n)`; the search itself uses only `O(1)` additional space. Heap insertion may move an item up at most the height of the tree, which is `O(log n)`. A maximum lookup is constant time because a max heap keeps the largest value at its root.

For this run, building by repeated insertion made 11 parent-child key comparisons. Heap lookup then used 0 key comparisons and 1 root access. Linear Search made `n - 1 = 7` score comparisons. These are counts for this input; complexity describes how work grows as `n` grows.
