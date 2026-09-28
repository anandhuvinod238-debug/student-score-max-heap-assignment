# Max Heap Insertion Trace

The heap is shown in its array representation (level order). An insertion comparison is one comparison between the newly inserted value and its parent. A comparison is counted each time a parent is checked; no parent is checked when inserting the first value.

| Step | Score inserted | Heap after insertion | Parent-child comparisons this step |
|---:|---:|---|---:|
| 1 | 78 | `78` | 0 |
| 2 | 92 | `92, 78` | 1 |
| 3 | 65 | `92, 78, 65` | 1 |
| 4 | 88 | `92, 88, 65, 78` | 2 |
| 5 | 95 | `95, 92, 65, 78, 88` | 2 |
| 6 | 72 | `95, 92, 72, 78, 88, 65` | 1 |
| 7 | 84 | `95, 92, 84, 78, 88, 65, 72` | 2 |
| 8 | 90 | `95, 92, 84, 90, 88, 65, 72, 78` | 2 |
| **Total** |  |  | **11** |

After all insertions, the root is `95`, the maximum. Finding it requires one root access and zero key comparisons. Linear Search on the same eight values compares seven times.
