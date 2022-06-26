#include "factors.h"

/**
 * readFileLines - Reads the file and get the lines
 *
 * @file - file path
 */

int readFileLines(char* file)
{
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	int line_count = 0;
	ssize_t line_size;
	FILE *fp = fopen(file, "r");

	if(!fp)
	{
		fprintf(stderr, "Error opening file '%s'\n", file);
		return EXIT_FAILURE;
	}

	line_size = getline(&line_buf, &line_buf_size, fp);
	getFactors(line_buf);
	while (line_size >= 0)
	{
		line_count++;
		line_size = getline(&line_buf, &line_buf_size, fp);
		getFactors(line_buf);
	}
	return (1);
}

