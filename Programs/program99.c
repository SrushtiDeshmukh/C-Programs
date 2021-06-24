//Concate first string to second string.
#include<stdio.h>
void StrCatX(const char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return ;
	}
	while(*dest!='\0')
	{
		dest++;
	}
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
int main()
{
	char arr[50];
	char brr[50];
	printf("Enter first string\n");
	scanf("%[^'\n']s",arr);
	printf("Enter second string\n");
	scanf(" %[^'\n']s",brr);
	StrCatX(arr,brr);	 // strcpyX(100,200)
	printf("Updated string is %s\n",brr);
	return 0;
}
