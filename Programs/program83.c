//Frquency of A or a in given string.
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
		if((*str=='a')||(*str=='A'))
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
	printf("Frequency of a/A is %d\n",iRet);
	return 0;
}
