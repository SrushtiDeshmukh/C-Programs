/*.Write a program which accept number from user and check whether it contains 0
in it or not.
Input :
Output : 2395
There is no Zero
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{	
	int iRem=0;
	while(iNo>0)
	{
	iRem=iNo%10;
	if(iRem==0)
	return TRUE;
	iNo=iNo/10;
	}
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number=\n");
	scanf("%d",&iValue);
	bRet = ChkZero(iValue);
	if(bRet == TRUE)
		printf("It Contains Zero\n");
	else
		printf("There is no Zero\n");
	return 0;
}


