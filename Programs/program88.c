//Convert small letters to capital letters.
#include<stdio.h>
void struprX(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return ;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		str++;
	}
}
int main()
{
	char Arr[10];
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	struprX(Arr);
	printf("Updated string is %s\n",Arr);
	return 0;
}
