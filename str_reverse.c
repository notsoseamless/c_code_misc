#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Types.h"



void reverse_string(const char* in_str)
{
	int in_str_size, i, j;
	char out_str[100];

	printf("In string:  %s\n", in_str);

	in_str_size = strlen(in_str);

	j = in_str_size-1;

	for(i = 0; i<in_str_size; i++, j--)
	{
		out_str[j] = in_str[i];
	}

	out_str[in_str_size] = 0;
	
	printf("Out string: %s\n", out_str);
}


int main(int argc, char** argv)
{
	printf("start test\n");
	reverse_string(argv[1]);
	printf("end test\n");
	return 1;
}









