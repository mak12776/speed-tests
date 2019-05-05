
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
		printf("usage: %s [FILE]\n", argv[0]);
	}

	FILE *file = fopen(argv[1], "r");
	if (!file)
		return 0;

	printf("%llu\n", countlines(file));
}
