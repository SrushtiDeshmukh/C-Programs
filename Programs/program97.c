//Accept string and copy it into another string by converting it into uppercase.
#include<stdio.h>
void UppCaseCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return ;
	}
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*dest=*src-('a'-'A');
		}
		else
		{
			*dest=*src;
		}
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
	UppCaseCpyX(arr,brr);	 // strcpyX(100,200)
	printf("Original string is %s\n",arr);
	printf("Updated string is %s\n",brr);
	return 0;
}
