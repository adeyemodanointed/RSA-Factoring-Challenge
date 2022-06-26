#include "factors.h"

/**
 * main - The main function
 *
 * @argc - the count of the arguments
 * @argv - the arguments
 * 
 * Return - integer 0
 */
int main(int argc, char** argv)
{
	/**
	 * Check that only one file was uploaded
	 *
	 * Write a loop to read line by line
	 *
	 * call the find factor function there
	 *
	 * return the factors as an array
	 *
	 * Print both asap
	 */

	readFileLines(argv[1]);
	
	return (0);
}
