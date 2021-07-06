/* Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.*/
#include<stdio.h>
int Difference(char *str)
{
	int iCnt1=0,iCnt2=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt1++;
		}
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt2++;
		}
		str++;
	}
	return (iCnt1-iCnt2);
}
int main()
{
	char arr[50];
	int iRet=0;
	printf("Enter the character\n");
	scanf("%[^'\n']s",arr);
	iRet=Difference(arr);
	printf("Difference is %d\n",iRet);
	return 0;
}
