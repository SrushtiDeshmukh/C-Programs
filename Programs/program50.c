// Input : 5
// Output : A   B   C   D   E
#include<stdio.h>
void pattern(unsigned int iNo)
{
	int i=0;
	char ch='A';
	for(i=1;i<=iNo;i++)
	{
		printf("%c\t",ch);
		ch++
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

