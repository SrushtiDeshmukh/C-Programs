/*Accept Character from user and check whether it is capital or not
(A-Z).
Input :F
Output : TRUE
Input :d
Output : FALSE*/
#include<stdio.h>
#include<stdbool.h>
bool CheckCap(char *str)
{
	if(str==NULL)
	{
		return false;
	}
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
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
	bRet=CheckCap(arr);
	if(bRet==true)
	{
		printf("%c is capital\n",*arr);
	}
	else
	{
		printf("%c is not capital\n",*arr);
	}
	return 0;
}
