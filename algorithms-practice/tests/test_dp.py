import os, sys
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from dynamic_programming.fibonacci import fib
from dynamic_programming.lis import length_of_lis


def test_fibonacci_small():
    expected = [0,1,1,2,3,5,8,13,21,34,55]
    for n, val in enumerate(expected):
        assert fib(n) == val


def test_lis_basic():
    assert length_of_lis([10,9,2,5,3,7,101,18]) == 4
    assert length_of_lis([0,1,0,3,2,3]) == 4
    assert length_of_lis([7,7,7,7,7,7,7]) == 1
