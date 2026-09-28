# Comparison and Conclusion

| Task | Max Heap | Linear Search / unsorted array |
|---|---|---|
| Find highest score in the given data | `O(1)`: read root; 0 key comparisons and 1 root access | `O(n)`: 7 comparisons for 8 scores |
| Add a new score | `O(log n)` worst case; 2 comparisons per inserted value on average in this trace | `O(1)` amortized to append when capacity is available |
| Keep highest score available after each addition | Insert in `O(log n)`; read current maximum in `O(1)` | Rescan in `O(n)`, or maintain a separate running maximum in `O(1)` per update |
| Storage | `O(n)` | `O(n)` for scores; `O(1)` extra search space |
| Best fit | Repeated maximum queries while scores arrive | A one-time maximum query, or a simple dataset with few updates |

## Final conclusion

Both methods correctly identify **95** as the highest score. For a single search over these eight scores, Linear Search is straightforward and performs only seven comparisons. For a university system that continuously accepts new scores and frequently needs the current highest score, a Max Heap is more suitable: each new score can be inserted in `O(log n)`, and the highest score is then available at the root in `O(1)`. If the system only needs to track one maximum and does not need the heap's other ordering capabilities, maintaining a separate running maximum is also an efficient alternative.
