#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numberofArgs = argc;
	float *argument1 = argv[0];
	float *argument2 = argv[1];
	printf("number of arguments: %d\n", numberofArgs);
	printf("argument1: %s\n", argument1);
	printf("argument2: %s\n", argument2);


    return 0;
}
