# Algorithms Practice

A clean, professional repository for solving 100+ LeetCode-style problems in Python and C++.

## Goals
- Solve 100+ problems spanning sorting, dynamic programming, and graphs.
- Maintain clean, optimized, well-tested solutions suitable for showcasing on a CV and GitHub.

## Repository Structure
```
algorithms-practice/
├── README.md
├── sorting/
│   ├── bubble_sort.py
│   ├── quick_sort.cpp
│   ├── template.py
│   └── template.cpp
├── dynamic_programming/
│   ├── fibonacci.py
│   ├── knapsack.cpp
│   ├── lis.py
│   ├── lis.cpp
│   ├── template.py
│   └── template.cpp
├── graphs/
│   ├── bfs.py
│   ├── dijkstra.cpp
│   ├── number_of_islands.py
│   ├── number_of_islands.cpp
│   ├── template.py
│   └── template.cpp
├── tests/
│   ├── test_sorting.py
│   └── test_dp.py
└── requirements.txt
```

## How to Run

### Python
1. Create a virtual environment (recommended):
   - Windows PowerShell
     ```powershell
     python -m venv .venv
     .venv\Scripts\Activate.ps1
     ```
2. Install dependencies:
   ```bash
   pip install -r requirements.txt
   ```
3. Run tests:
   ```bash
   pytest -q
   ```
4. Run a specific Python solution directly, e.g. `fibonacci.py`:
   ```bash
   python dynamic_programming/fibonacci.py
   ```

### C++
Use `g++` or any modern C++ compiler. Examples below use `g++`:
- Compile and run `quick_sort.cpp`:
  ```bash
  g++ -O2 -std=c++17 sorting/quick_sort.cpp -o quick_sort && ./quick_sort
  ```
- Compile and run `dijkstra.cpp`:
  ```bash
  g++ -O2 -std=c++17 graphs/dijkstra.cpp -o dijkstra && ./dijkstra
  ```

## Best Practices
- Use clear function names and type hints (Python) or strong types (C++).
- Prefer iterative DP over recursion where stack depth is a concern.
- Use appropriate data structures (e.g., `heapq` in Python, `priority_queue` in C++ for Dijkstra).
- Add docstrings and time/space complexity notes at the top of each solution.
- Keep solutions self-contained and include minimal `main` examples for C++.
- Write tests for correctness and edge cases; compare against Python's reference implementations where suitable.
- Aim for O(n log n) where possible on sorting and LIS; document trade-offs for clarity.

## Adding New Problems
- Copy a `template.py` or `template.cpp` from the relevant domain folder.
- Implement the solution, add complexity notes, and provide a small example in `__main__` (Python) or `main()` (C++).
- Add or extend tests in `tests/`.
