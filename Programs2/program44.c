/*Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input :
“Srushti Deshmukh”
7
Output : Srushti
Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/

#include<stdio.h>
void StrnCpyX(char *src, char *dest,int iNo)
{
	if(src==NULL)
		return;
		
	while((*src!='\0')&&(iNo!=0))
	{
		*dest=*src;
		src++;
		dest++;
		iNo--;
	}
	*dest='\0';
}

int main()
{
	char src[50],dest[50];
	int iNo=0;
	printf("Enter the string\n");
	scanf("%[^'\n']s",src);
	printf("Enter the no to copy chracter\n");
	scanf("%d",&iNo);
	StrnCpyX(src,dest,iNo);
	printf("%s\n",dest);
	return 0;
}

