#include<stdio.h>
int main()
{
	int ret;
	printf("Hello World\n");

	ret=fork();

	if(ret==0)
		printf("I am Child and Return Value=%D\n",ret);
	else
		printf("I am parent and return value=%d\n",ret);
}
