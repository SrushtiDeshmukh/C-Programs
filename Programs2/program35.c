//Write a program which accept string from user and count number of small characters.
#include<stdio.h>
int Count(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;

}
int main()
{
	char arr[50];
	int iRet=0;
	printf("Enter the character\n");
	scanf("%[^'\n']s",arr);
	iRet=Count(arr);
	printf("capital letters is %d\n",iRet);
	return 0;
}
