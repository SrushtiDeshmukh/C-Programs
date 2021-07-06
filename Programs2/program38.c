//Write a program which accept string from user and display it in reverse order.
// Input :“MarvellouS”
//Output :“SuollevraM”
#include<stdio.h>
void DisplayRev(char *str)
{
	int iCnt=0,i=0;
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		iCnt++;	
		str++;
	}
	str--;
	while(iCnt > 0)
	{
		printf("%c",*str);
		iCnt--;
		str--;
	}
	printf("\n");
}
int main()
{
	char arr[50];
	printf("Enter the character\n");
	scanf("%[^'\n']s",arr);
	DisplayRev(arr);
	return 0;
}
