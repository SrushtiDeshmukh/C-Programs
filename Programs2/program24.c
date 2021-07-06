/* Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input :F
Output : TRUE

Input :&
Output : FALSE */
#include<stdio.h>
#include<stdbool.h>
bool Check(char *str)
{
	if(str==NULL)
	{
		return false;
	}
	while(*str!='\0')
	{
		if(((*str>='a')&&(*str<='z'))||((*str>='A')&&(*str<='Z')))
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
	char Arr[1];
	bool bRet=false;
	printf("Enter the character\n");
	scanf("%[^'\n']s",Arr);
	//fgets(Arr,10,stdin);
	bRet=Check(Arr);
	if(bRet==true)
	{
		printf("%c is alphabet\n",*Arr);
	}
	else
	{
		printf("%c not alphabet\n",*Arr);
	}
	return 0;
}
