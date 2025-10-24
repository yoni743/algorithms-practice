import os, sys
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from sorting.bubble_sort import bubble_sort


def test_bubble_sort_basic():
    assert bubble_sort([5,1,4,2,8]) == [1,2,4,5,8]


def test_bubble_sort_empty_and_single():
    assert bubble_sort([]) == []
    assert bubble_sort([1]) == [1]


def test_bubble_sort_random_compare_sorted():
    import random
    arr = [random.randint(-1000, 1000) for _ in range(200)]
    assert bubble_sort(arr) == sorted(arr)
