# Q3: Sorting techniques and which is best

| Technique | Idea | Best case | Average / Worst | Extra space | Stable |
|-----------|------|-----------|-----------------|-------------|--------|
| Bubble sort | Swap adjacent elements that are out of order | O(n) (with swap flag) | O(n^2) | O(1) | Yes |
| Selection sort | Pick the smallest/largest and place it at the front | O(n^2) | O(n^2) | O(1) | No |
| Insertion sort | Insert each element at its correct place in the sorted part | O(n) | O(n^2) | O(1) | Yes |
| Merge sort | Divide the array in halves, sort and merge | O(n log n) | O(n log n) | O(n) | Yes |
| Quick sort | Partition around a pivot, sort each part | O(n log n) | O(n log n) avg, O(n^2) worst | O(log n) | No |

**Which is best?**
- For large data, Merge sort and Quick sort (O(n log n)) are the best. Quick sort is usually fastest in practice.
- For small arrays like the 5 values in this question, Insertion sort is the best simple technique: it is easy to write, fast on small or nearly sorted data, and needs no extra memory.
- Bubble sort is the slowest and mostly used for learning.
