/* Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5
*/
#include<stdio.h>
int Count(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		iCnt++;
		str++;
		Count(str);
	}
	return iCnt;
}

int main()
{
	char ch[50];
	int iRet=0;
	printf("Enter string\n");
	scanf("%s",ch);
	iRet=Count(ch);
	printf("No of characters in sring are %d\n",iRet);
	return 0;
}
