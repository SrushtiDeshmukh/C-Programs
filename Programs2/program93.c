/* Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5
*/
#include<stdio.h>
int SmallChar(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if(*str>='a' && *str<='z')
			iCnt++;
		str++;
		SmallChar(str);
	}
	return iCnt;
}

int main()
{
	int iRet=0;
	char str[50];
	printf("Enter the string\n");
	fgets(str,50,stdin);
	iRet=SmallChar(str);
	printf("Small letters is %d\n",iRet);
	return 0;
}
