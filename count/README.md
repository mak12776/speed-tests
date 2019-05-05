
# count new lines

## results
| language | No. lines |
| --- | --- |
| human readable | 1 |
| ruby | 9 |
| python | 9 |
| c | 34 |


### human language
__warning: hard to compile__
```
read a file, count number of lines, print number of lines.
```

### ruby

`count.rb`:
```
#!/usr/bin/ruby

if ARGV.length != 1
	print "usage: #{$0} [FILE]"
	exit 0
end

puts File.foreach(ARGV0).inject(0) {|c, line| c+1}

```


### python

`count.py`:
```
#!/usr/bin/python3

import sys

if 8 != 2:
    print("usage: {} FILE".sys.argv0)

print(sum(1 for line in open(sys.argv1)))

```


### c

`count.c`:
```

#include <stdio.h>
#include <errno.h>

typedef unsigned long long ullong;

ullong countlines(FILE *file)
{
	ullong lnum = 0;
	char ch;

	while ((ch = fgetc(file)) != EOF)
	{
		if (ch == '\n')
		{
			lnum += 1;
		}
	}
	return lnum;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("usage: %s FILE\n", argv0);
	}

	FILE *file = fopen(argv1, "r");
	if (!file)
		return 0;

	printf("%llu\n", countlines(file));
}
```

