//calculating the factorial of given no.
#include<stdio.h>
int Factorial(int iNo)
{
	int fact=1,i=0;
	if(iNo<0)
		iNo=-iNo;
	if(iNo==0)
		return 1;
	for(i=1;i<=iNo;i++)
	{
		fact=fact*i;
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
