// Accept no from user and check whether that no is even or odd.
#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
	if((iNo%2)==0)
		return true;
	else
		return false;
}
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter the no :");
	scanf("%d",&iValue);
	bRet=CheckEven(iValue);
	if(bRet==true)
		printf("%d is even no\n",iValue);
	else
		printf("%d is odd no\n",iValue);
	return 0;
}

