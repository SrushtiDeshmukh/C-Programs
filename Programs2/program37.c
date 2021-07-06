// Write a program which accept string from user and check whether it contains vowels in it or not.
#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char *str)
{
	if(str==NULL)
	{
		return false;
	}
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||
		    (*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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
	char arr[50];
	bool bRet=false;
	printf("Enter the character\n");
	scanf("%[^'\n']s",arr);
	bRet=CheckVowel(arr);
	if(bRet==true)
	{
		printf("Vowels present\n");
	}
	else
	{
		printf("Vowels not present\n");
	}
	return 0;
}
