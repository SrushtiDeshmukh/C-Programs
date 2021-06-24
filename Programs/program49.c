// Input : 5
// Output : A   B   C   D   E
#include<stdio.h>
void pattern(unsigned int iNo)
{
	int i=0;
	char ch='\0';
	for(i=1,ch='A';i<=iNo;i++,ch++)
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
	pattern(iNo);
	return 0;
}

