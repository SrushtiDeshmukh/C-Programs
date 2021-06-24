#include<stdio.h>
void Display(char str[])
{
	printf("Characters from string are\n");
	int i=0;
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c\n",str[i]);
	}
}
int main()
{
	char Arr[10];
	printf("Enter your name\n");
	fgets(Arr,10,stdin);
	Display(Arr);
	return 0;
}
