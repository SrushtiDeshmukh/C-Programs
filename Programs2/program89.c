/*Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
*/
#include<stdio.h>
int Factorial(int iNo)
{
	static int iFact=1;
	if(iNo==0 || iNo==1)
	{
		return 1;
	}
	else if(iNo>1)
	{
		iFact=iFact*iNo;
		iNo--;
		Factorial(iNo);
	}
	return iFact;
}

int main()
{
	int iNo=0,iRet=0;
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=Factorial(iNo);
	printf("Factorial of %d is %d\n ",iNo,iRet);
	return 0;
}
