# Stack follows LIFO(Last in First Out) Principles
class Stack(object):
    # Initialising the stack object
    def __init__(self):
        self.items = []
    # Checking whether the stack is empty or not
    def isEmpty(self):
        return self.items == []
    # Adding new element to the END stack
    def push(self, item):
        return self.items.append(item)

    # Remove an element
    def pop(self):
        return self.items.pop()

    # See the last added element
    def peek(self):
        return self.items[len(self.items) - 1]

    # Return the size of the stack
    def size(self):
        return len(self.items)

s=Stack()
print(s.isEmpty())
print(s.push(1))
print(s.push('two'))
print(s.peek())
print(s.push(True))
print(s.size())
print(s.isEmpty())