# Queue follows FIFO principle
class Queue(object):
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    # Add element to the array
    def enqueue(self, item):
        self.items.insert(0, item)

    # remove elements is the order they were added
    def dequeue(self):
        return self.items.pop()

    # return the size of the queue
    def size(self):
        return len(self.items)
q=Queue()
print(q.size())
print(q.isEmpty())
print(q.enqueue(1))
print(q.enqueue(2))
print(q.dequeue())