from AbstractVector import AbstractVector

class Vector(AbstractVector):

    def __init__(self, values=None, size=None):
        pass
        # assert values is None or size is None, "Both values and size specified, specify only one"
        # if size is not None:
        #     self.values = [0.0]*size
        # elif values is not None:
        #     self.values = [i for i in values]