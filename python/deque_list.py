
import collections

def func1():
    result = []
    for i in range(1000):
        result.append(1)
    return result

def func2():
    result = collections.deque()
    for i in range(1000):
        result.append(1)
    return list(result)

