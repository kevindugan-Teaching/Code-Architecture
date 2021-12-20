import pytest
from ..Vector import Vector

def test_constructor():
    # Test default constructor
    a = Vector()
    assert a.size == 0
    assert a.values == []

    # Test zero vector
    b = Vector(size=3)
    assert b.size == 3
    assert b.values == pytest.approx([0, 0, 0])

    # Test values vector
    c = Vector(values=[-1, 2.3, 4.5, -4])
    assert c.size == 4
    assert c.values == pytest.approx([-1, 2.3, 4.5, -4])

    # Check error condition
    with pytest.raises(Exception):
        d = Vector(size=3, values=[1, 2, 3])

def test_l2norm():
    a = Vector(values=[-1, 2, 1, -3, 1])
    assert a.l2norm() == pytest.approx(4)