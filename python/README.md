# python timeit functions

## deque or list
`deque_list.py`:
```

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

```
__result__:
```
make[1]: Entering directory '/home/amin/coding/speed-tests/python'
python3 -m timeit -n 1000 -s "import deque_list" "deque_list.func1()"
1000 loops, best of 3: 79 usec per loop
python3 -m timeit -n 1000 -s "import deque_list" "deque_list.func2()"
1000 loops, best of 3: 86.4 usec per loop
make[1]: Leaving directory '/home/amin/coding/speed-tests/python'
```
