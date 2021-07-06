/*Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.*/
#include<stdio.h>
#include<stdbool.h>
void Display(unsigned int iNo1,unsigned int iNo2)
{
	int i=0,iResult=0,iNo=0;
	unsigned int iMask=0x00000001;
	iNo=iNo1 & iNo2;
	
	printf("Position of on bits are:");
	for(i=1;i<=32;i++)
	{
		iResult=iMask&iNo;
		if(iMask==iResult)
		{
			printf("%d\t",i);
		}
		iMask=iMask<<1;
	}
	printf("\n");
}
int main()
{
	unsigned int iValue1=0,iValue2=0;
	
	printf("Enter the first no\n");
	scanf("%d",&iValue1);
	printf("Enter the second no\n");
	scanf("%d",&iValue2);
	Display(iValue1,iValue2);
	return 0;
}

