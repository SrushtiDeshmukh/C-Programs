/*Write a program which accept string from user and copy small
characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi”
*/

#include<stdio.h>
void CpySmallX(char *src, char *dest)
{
	if(src==NULL)
		return;
		
	while((*src!='\0'))
	{
		if((*src>='a')&&(*src<='z'))
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
	CpySmallX(src,dest);
	printf("%s\n",dest);
	return 0;
}

