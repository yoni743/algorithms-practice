"""
Breadth-First Search traversal on unweighted graph.
- Time: O(n + m)
- Space: O(n)
"""
from collections import deque
from typing import Dict, List

Graph = Dict[int, List[int]]


def bfs(graph: Graph, start: int) -> List[int]:
    visited = set([start])
    order: List[int] = []
    q = deque([start])
    while q:
        u = q.popleft()
        order.append(u)
        for v in graph.get(u, []):
            if v not in visited:
                visited.add(v)
                q.append(v)
    return order


if __name__ == "__main__":
    g = {0:[1,2], 1:[2], 2:[0,3], 3:[]}
    print(bfs(g, 2))  # [2, 0, 3, 1]
