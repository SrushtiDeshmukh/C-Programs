//Accept string copy that string into another string in reverse order.
#include<stdio.h>
void StrCpyRevX(char *src,char *dest)
{
	int iCnt=0;
	if((src==NULL)||(dest==NULL))
	{
		return ;
	}
	while(*src!='\0')
	{
		iCnt++;
		src++;
	}
	src--;
	while(iCnt>0)
	{
		*dest=*src;
		iCnt--;
		src--;
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
	StrCpyRevX(arr,brr);
	printf("After copy string is %s\n",brr);
	return 0;
}
