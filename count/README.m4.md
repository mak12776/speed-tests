changequote([, ])[]dnl
define(readfile,dnl
`$1`:
```$2
[esyscmd(cat ]$1[)[]dnl]
```
)[]dnl

# count new lines

## results
| language | No. lines |
| --- | --- |
| human language | 1 |
| ruby | 9 |
| python | 9 |
| c | 34 |


### human language
__warning: hard to compile__
```
read a file, count number of lines, print number of lines.
```

### ruby

readfile(count.rb,ruby)

### python

readfile(count.py,python)

### c

readfile(count.c,c)
