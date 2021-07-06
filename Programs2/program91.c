/* Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/
#include<stdio.h>
#include<stdlib.h>
int WhiteSpace(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if(*str==' ')
			iCnt++;
		str++;
		WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char ch[50];
	int iRet=0;
	printf("Enter string\n");
	fgets(ch,50,stdin);
	iRet=WhiteSpace(ch);
	printf("No of spaces in sring are %d\n",iRet);
	return 0;
}
