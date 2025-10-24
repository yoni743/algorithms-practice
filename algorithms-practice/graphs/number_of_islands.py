"""
Number of Islands (DFS/BFS on grid of '0'/'1')
- Time: O(R*C)
- Space: O(R*C) worst-case recursion/queue
"""
from typing import List


def num_islands(grid: List[List[str]]) -> int:
    if not grid or not grid[0]:
        return 0
    R, C = len(grid), len(grid[0])

    def dfs(r: int, c: int) -> None:
        if r < 0 or r >= R or c < 0 or c >= C or grid[r][c] != '1':
            return
        grid[r][c] = '0'
        dfs(r+1,c); dfs(r-1,c); dfs(r,c+1); dfs(r,c-1)

    count = 0
    for r in range(R):
        for c in range(C):
            if grid[r][c] == '1':
                count += 1
                dfs(r, c)
    return count


if __name__ == "__main__":
    g = [list("11000"), list("11000"), list("00100"), list("00011")]
    print(num_islands(g))  # 3
