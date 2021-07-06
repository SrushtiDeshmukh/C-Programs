/* Accept Character from user and check whether it is small case or
not (a-z).
Input :g
Output : TRUE
Input :D
Output : FALSE */
#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char *str)
{
	if(str==NULL)
	{
		return false;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	bRet=CheckSmall(arr);
	if(bRet==true)
	{
		printf("%c is small\n",*arr);
	}
	else
	{
		printf("%c is not small\n",*arr);
	}
	return 0;
}
