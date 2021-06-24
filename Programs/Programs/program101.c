//Accept string and check whether given character found in that or not.
#include<stdio.h>
#include<stdbool.h>
bool ChkChar(const char *str,char ch)
{
	if((str==NULL))
	{
		return false;
	}
	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}
		str++;
	}
	if(*str!='\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char arr[50];
	char ch='\0';
	bool bRet=false;
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	printf("Enter the char\n");
	scanf(" %[^'\n']s",&ch);
	bRet=ChkChar(arr,ch);	 // strcpyX(100,ch)
	if(bRet==true)
	{
		printf("char found\n");	
	}
	else
	{
		printf("char not found\n");	
	}
	return 0;
}
