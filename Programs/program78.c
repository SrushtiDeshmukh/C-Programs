//Accept string and display
#include<stdio.h>

int main()
{
	char arr[50];
	printf("Enter your name\n");
	//scanf("%s",arr);
	//gets(arr);
	//fgets(arr,50,stdin);
	scanf("%[^'\n']s",arr);
	
	printf("Your name is %s\n",arr);
	return 0;
}
