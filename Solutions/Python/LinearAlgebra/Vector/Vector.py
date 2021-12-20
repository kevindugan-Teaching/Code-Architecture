from .AbstractVector import AbstractVector
import numpy as np

class Vector(AbstractVector):

    def __init__(self, values=None, size=None):
        # Default: Empty Vector
        if size is None and values is None:
            self.values = []
            self.size = len(self.values)

        # Both keys cannot be specified
        assert values is None or size is None, "Both values and size specified, specify only one"

        # Construct
        if size is not None:
            self.values = [0.0]*size
            self.size = len(self.values)
        elif values is not None:
            self.values = [i for i in values]
            self.size = len(self.values)

    def l2norm(self):
        result = 0.0
        for it in self.values:
            result += it*it
        return np.sqrt(result)