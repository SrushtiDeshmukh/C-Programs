/*Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).*/
#include<stdio.h>
#include<stdbool.h>
bool CheckSpecChar(char *str)
{
	char ch;
	if(str==NULL)
	{
		return false; 
	}
	while(*str!='\0')
	{
		if((*str=='!')||(*str=='@')||(*str=='$')||(*str=='%')||(*str=='^')||(*str=='*')||(*str=='#'))
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
	bRet=CheckSpecChar(arr);
	if(bRet==true)
	{
		printf("%c is special char\n",*arr);
	}
	else
	{
		printf("%c is not special char\n",*arr);
	}
	return 0;
}
