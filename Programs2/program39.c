//Write a program which accept string from user and display only digits from that string.
// Input : “marve89llous121”
// Output : 89121
#include<stdio.h>
void Display(char *str)
{
	int iCnt=0,i=0;
	if(str==NULL)
	{
		return ;
	}
	while(*str!='\0')
	{
		if((*str>='1')&&(*str<='9'))
		{
			printf("%c",*str);
		}
		str++;
	}
	printf("\n");
}
int main()
{
	char arr[50];
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	Display(arr);
	return 0;
}

