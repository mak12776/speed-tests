
import collections

def func1(size):
    result = []
    for i in range(size):
        result.append(1)
    return result

def func2(size):
    result = collections.deque()
    for i in range(size):
        result.append(1)
    return list(result)

