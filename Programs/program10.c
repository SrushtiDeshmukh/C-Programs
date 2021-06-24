//Accept the no from user and display table of that no.
#include<stdio.h>
void DisplayTable(int iNo)
{	
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=10;i++)
	{
		printf("%d\n",iNo*i);
	}
}
int main()
{
	int iValue=0;
	printf("enter the no :");
	scanf("%d",&iValue);
	DisplayTable(iValue);
	return 0;
}

