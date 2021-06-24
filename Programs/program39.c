//Difference betn smallest and largest digit
#include<stdio.h>
int  MaxMin(int iNo)
{
    int iCnt = 0,iMax=0,iMin=9,iRem=0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo>0)
    {
	iRem=iNo%10;
    	if(iRem<iMin)
	   {
		iMin=iRem;
	   }    
	if(iRem>iMax)
	   {
		iMax=iRem;
	   }
	iNo=iNo/10;
    }
	return iMax-iMin;
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet=MaxMin(iValue1);
    printf("Difference betn largest and smalest digit %d\n",iRet);
    return 0;
}
