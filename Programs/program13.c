//calculating factorial of the given number.
#include<stdio.h>
int Factorial(int iNo)
{
	int fact=1;
	if(iNo<0)
		iNo=-iNo;
	if(iNo==0)
		return 1;
	while(iNo>0)
	{
		fact=fact*iNo;
		iNo--;
	}
	return fact;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the no :");
	scanf("%d",&iValue);
	iRet=Factorial(iValue);
	printf("%d\n",iRet);	
	return 0;
}
