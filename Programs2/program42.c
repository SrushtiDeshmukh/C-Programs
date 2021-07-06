/*Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input : Marvellous Multi OS
	M
Output : 2
*/
#include<stdio.h>
int FirstOccurence(char *str, char ch)
{
	int index=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}
		str++;
		index++;
	}
	if(*str!='\0')
	{
		return index;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr[20];
	char cValue;
	int iRet = 0;
	printf("Enter string\n");
	scanf("%[^’\n’]s",arr);
	printf("Enter the character\n");
	scanf(" %c",&cValue);
	iRet = FirstOccurence(arr, cValue);
	printf("First occurence is %d\n",iRet);
	return 0;
}
