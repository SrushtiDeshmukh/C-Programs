//Frequency of small letters in given string.
#include<stdio.h>
int Count(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[10];
	int iRet=0;
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	//fgets(Arr,10,stdin);
	iRet=Count(Arr);
	printf("small letter is %d\n",iRet);
	return 0;
}
