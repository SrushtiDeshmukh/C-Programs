/*Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input :
“Srushti Deshmukh”
“@Pune”
Output :
“Srushti Deshmukh @Pune”
*/

#include<stdio.h>
void StrCatX(char *str1, char *str2)
{
	if((str1==NULL)&&(str2==NULL))
		return;
		
	while((*str1!='\0'))
	{
		str1++;
	}
	*str1=' ';
	*str1++;
	
	while(*str2!='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1='\0';
}

int main()
{
	char str1[50],str2[50];
	int iNo=0;
	printf("Enter first string\n");
	scanf("%[^'\n']s",str1);
	printf("Enter second string\n");
	scanf(" %[^'\n']s",str2);
	StrCatX(str1,str2);
	printf("%s\n",str1);
	return 0;
}

