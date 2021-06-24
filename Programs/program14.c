//Accept the no from user and display its factor.
#include<stdio.h>
void DisplayFactor(int iNo)
{
	int i=0;
	if(iNo<0)
	iNo=-iNo;
	for(i=1;i<iNo;i++)     		//Time Complexity-O(N)
	{
		if((iNo%i)==0)
		printf("%d\t",i);
	}
	printf("\n");
}
int main()
{
	int iValue=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	DisplayFactor(iValue);
	return 0;
}
