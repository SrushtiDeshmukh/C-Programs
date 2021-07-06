/*Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
*/
#include<stdio.h>
void Display(char *str)
{
	char ch;
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			for(ch=*str;ch<='Z';ch++)
			{
				printf("%c\t",ch);	
			}
		}
		else if((*str>='a')&&(*str<='z'))
		{
			for(ch=*str;ch>='a';ch--)
			{
				printf("%c\t",ch);
			}
		}
		else{
			break;}
		str++;
	}

}
int main()
{
	char arr[10];
	printf("Enter the character\n");
	scanf("%[^'\n']s",arr);
	Display(arr);
	return 0;
}
