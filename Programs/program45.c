// Input : 5
// Output : *   #   *   #   *   #   *   #   *   #
#include<stdio.h>
void pattern(unsigned int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("*\t#\t");
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
