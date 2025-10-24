"""
Longest Increasing Subsequence (Patience Sorting)
- Time: O(n log n)
- Space: O(n)
"""
from bisect import bisect_left
from typing import List


def length_of_lis(nums: List[int]) -> int:
    tails: List[int] = []
    for x in nums:
        i = bisect_left(tails, x)
        if i == len(tails):
            tails.append(x)
        else:
            tails[i] = x
    return len(tails)


if __name__ == "__main__":
    print(length_of_lis([10,9,2,5,3,7,101,18]))  # 4
