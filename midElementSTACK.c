# exp

// Stack-Array Implementation
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int stack[]={10,12,1233,145,67,667,435,76,32,45,423};  //hard coded the stack since the elements are not known by the user
	int len;
	len = sizeof(stack)/sizeof(int);
	printf("%d is mid element",stack[len/2]);
	return 0;
}
