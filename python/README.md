# python timeit functions

### deque or list
`deque_list.py`:
```python

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

```
__result__:
```
make[1]: Entering directory '/home/amin/coding/speed-tests/python'
python3 -m timeit -n 100 -s "import deque_list" "deque_list.func1(10 ** 3)"
100 loops, best of 3: 113 usec per loop
python3 -m timeit -n 100 -s "import deque_list" "deque_list.func2(10 ** 3)"
100 loops, best of 3: 126 usec per loop
make[1]: Leaving directory '/home/amin/coding/speed-tests/python'
```
