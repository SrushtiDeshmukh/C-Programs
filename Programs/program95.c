//Accept string and copy it into another string.
#include<stdio.h>
void StrCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return ;
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
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	StrCpyX(arr,brr);
	printf("After copy string is %s\n",brr);
	return 0;
}
