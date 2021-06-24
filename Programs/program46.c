// Input : 5
// Output : 1   *   2   *   3   *   4   *   5   *
#include<stdio.h>
void pattern(unsigned int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("%d\t*\t",i);
	}
	printf("\n");
}
int main()
{
	unsigned int iNo=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	pattern(iNo);
	return 0;
}
