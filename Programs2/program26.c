/*Accept Character from user and check whether it is digit or not
(0-9).
Input :7
Output : TRUE
Input :d
Output : FALSE */
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char *str)
{
	if(str==NULL)
	{
		return false;
	}
	while(*str!='\0')
	{
		if((*str>='0')&&(*str<='9'))
		{
			break;
		}
		str++;
	}
	if(*str=='\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	char arr[10];
	bool bRet=false;
	printf("Enter the character\n");
	scanf("%[^'\n']s",arr);
	bRet=CheckDigit(arr);
	if(bRet==true)
	{
		printf("%c is digit\n",*arr);
	}
	else
	{
		printf("%c is not digit\n",*arr);
	}
	return 0;
}
