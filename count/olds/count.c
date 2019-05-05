
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 8192 // 1 MB

#define EXIT_ERROR 1
#define EXIT_NORMAL 0

int main(int argc, char **argv)
{
	char buffer[BUFFER_SIZE];
	size_t bnum;
	unsigned long long lnum = 0;

	if (argc != 2)
	{
		printf("usage: %s [FILE]\n", argv[0]);
		return EXIT_NORMAL;
	}

	FILE *infile = fopen(argv[1], "r");
	if (infile == NULL)
	{
		printf(
				"error: can't open %s: %s\n", 
				argv[1], 
				strerror(errno)
			  );
		return EXIT_ERROR;
	}

	while ((bnum = fread(buffer, 1, BUFFER_SIZE, infile)) != 0)
	{
		for (size_t i = 0; i < bnum; i ++)
		{
			if (buffer[i] == '\n')
			{
				lnum ++;
			}
		}
	}

	if (ferror(infile))
	{
		printf(
				"error: while reading '%s': %s\n", 
				argv[1], 
				strerror(errno)
			  );
		return EXIT_ERROR;
	}

	printf("%llu\n", lnum);
	return EXIT_NORMAL;

}
