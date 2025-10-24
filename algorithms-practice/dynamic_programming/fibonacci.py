"""
Fibonacci Number (Iterative DP)
- Time: O(n)
- Space: O(1)
"""
from typing import *


def fib(n: int) -> int:
    if n <= 1:
        return n
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b


if __name__ == "__main__":
    print(fib(10))  # 55
