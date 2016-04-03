# exp

// Stack-Array Implementation
#include <stdio.h>
#include <stdlib.h>
/*
struct node
{
    int data;               // if the test case is given we can access the stack using structure
    struct node *link;
}*top = NULL;
*/
int main(void) 
{
	int stack[100]={10,12,1233,145,67,667,435,76,32,45,423};  //hard coded the stack since the elements are not known by the user
	int top=0,i;
	for(i=1;stack[i]!='\0';i++)
	{
		top++;			// finding the total elements in a stack
	}
	top=floor(top/2);
	printf("%d is mid element",stack[top]);
		return 0;
}
