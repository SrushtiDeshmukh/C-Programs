//Convert capital letters to small letters.
#include<stdio.h>
void strlwrX(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return ;
	}
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
}
int main()
{
	char Arr[10];
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	strlwrX(Arr);
	printf("Updated string is %s\n",Arr);
	return 0;
}
