#include <stdio.h>
int count=0;
int main(void) {
	int count=0;
while(++count<=5)	
	{
	     static	int count=0;
		++count;
		printf("counta-%d\n",count);
	}
	printf("count-%d\n",count);
	print();
	return 0;
}
void print()
{
	++count;
	printf("global count=%d\n",count);
}
