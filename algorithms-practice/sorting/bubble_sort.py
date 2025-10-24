"""
Bubble Sort
- Time: O(n^2)
- Space: O(1)
"""
from typing import List


def bubble_sort(arr: List[int]) -> List[int]:
    a = arr[:]  # avoid mutating input
    n = len(a)
    for i in range(n):
        swapped = False
        for j in range(0, n - i - 1):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                swapped = True
        if not swapped:
            break
    return a


if __name__ == "__main__":
    print(bubble_sort([5, 1, 4, 2, 8]))  # [1, 2, 4, 5, 8]
