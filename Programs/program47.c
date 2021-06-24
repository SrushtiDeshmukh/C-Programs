// Input : 5
// Output : *   5   *   4   *   3   *   2   *   1
#include<stdio.h>
void pattern(unsigned int iNo)
{
	int i=0;
	for(i=iNo;i>=1;i--)
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
