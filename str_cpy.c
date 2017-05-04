#include <stdio.h>
#include <stdlib.h>
#include "Types.h"



/* prototypes */
void test(U16 n);

int main(int argc, char** argv)
{
	printf("start test\n");
	test(atoi(argv[1]));
	printf("end test\n");
	return 1;
}



char* strcpy(char *d, const char *s)
{
	char * ret;
	ret = d;
	while(*d++ = *s++);
	return ret;
}


void test(U16 n)
{
	const char word[] = "hello";
	char *a;
	char *b;

	a = &word[0];

	printf("here was %s\n", a); 
	printf("here is %s\n", strcpy(b, a)); 
	printf("and here is %s\n", b); 
}






