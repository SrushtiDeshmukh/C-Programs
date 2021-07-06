/*Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.*/
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
		printf("Decimal : %d\n",*str);
		printf("Octal : %o\n",*str);
		printf("Hexadecimal :%x\n",*str);
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
