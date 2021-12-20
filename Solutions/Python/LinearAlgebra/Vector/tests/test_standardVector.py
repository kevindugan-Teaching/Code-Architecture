import pytest
from ..Vector import Vector

def test_constructor():
    # Test default constructor
    a = Vector()
    assert a.size == 0
    assert a.values == []