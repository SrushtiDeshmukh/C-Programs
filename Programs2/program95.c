/*Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/
#include<stdio.h>
int Reverse(int iNo)
{
	static int iRem=0,iRev=0;
	if(iNo!=0)
	{
		iRem=iNo%10;
		iRev=(iRev*10)+iRem;
		iNo=iNo/10;
		Reverse(iNo);
	}
	return iRev;
}

int main()
{
	int iNo=0,iRet=0;	
	printf("Enter the no\n");
	scanf("%d",&iNo);
	iRet=Reverse(iNo);
	printf("Reverse no is %d\n",iRet);
	return 0;
}
