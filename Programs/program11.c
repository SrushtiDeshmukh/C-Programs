//Accept nos from user & calculate power of 1st no,2nd no upto times.
#include<stdio.h>
int Power(int iNo1,int iNo2)
{
	int iMult=1,i=0;
   	 if(iNo1 < 0)
    	{  
		 iNo1 = -iNo1;  
	}
   	 if(iNo2 < 0)
  	{ 
		 iNo2 = -iNo2;   
	}
	for(i=1;i<=iNo2;i++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}
int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("Enter the first no :");
	scanf("%d",&iValue1);
	printf("Enter the second no :");
	scanf("%d",&iValue2);
	iRet=Power(iValue1,iValue2);
	printf("power is %d\n",iRet);	
	return 0;
}
