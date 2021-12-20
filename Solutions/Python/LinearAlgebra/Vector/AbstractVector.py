from abc import ABC, abstractmethod

class AbstractVector(ABC):

    @abstractmethod
    def l2norm(self):
        pass