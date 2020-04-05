import ctypes
class DynamicArray(object):
    def __init__(self):
        self.n=0
        self.capacity=1
        self.A=self.make_array(self.capacity)

    def __len__(self):
        return self.n

    def __getitem__(self, item):
        if not 0<= k <self.n:
            return IndexError('K is out of bounts')

        return  self.A[item]

    def append(self,ele):
        if self.n == self.capacity:
            self._resize(2*self.capacity)
        self.A[self.n]=ele
        self.n += 1

    def _re