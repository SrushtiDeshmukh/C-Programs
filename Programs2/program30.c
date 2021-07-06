/*Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input :Q
Output : q
Input :m
Output : M
Input :4
Output : 4
Input :%
Output : % */
#include<stdio.h>
#include<stdbool.h>
void Display(char *str)
{
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			printf("%c\n",(*str-32));	
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			printf("%c\n",(*str+32));
		}
		else
			printf("%c\n",*str);
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
