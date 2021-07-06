/*Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/

#include<stdio.h>
void CpyCapX(char *src, char *dest)
{
	if(src==NULL)
		return;
		
	while((*src!='\0'))
	{
		if((*src>='A')&&(*src<='Z'))
		{
			*dest=*src;
			dest++;
		}
		src++;
	}
	*dest='\0';
}

int main()
{
	char src[50],dest[50];
	int iNo=0;
	printf("Enter the string\n");
	scanf("%[^'\n']s",src);
	CpyCapX(src,dest);
	printf("%s\n",dest);
	return 0;
}

