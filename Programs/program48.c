// Input : 5    A
// Output : A   A   A   A   A
#include<stdio.h>
void pattern(unsigned int iNo,char ch)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}
int main()
{
	unsigned int iNo=0;
	char ch='\0';
	printf("Enter the no\n");
	scanf("%d",&iNo);
	printf("Enter character\n");
	scanf(" %c",&ch);
	pattern(iNo,ch);
	return 0;
}

