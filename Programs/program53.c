/*
Input : 4
Output : 4
	 	 	*	
 	 	*	*	
 	*	*	*	
*	*	*	*	


*/
#include<stdio.h>
void pattern(unsigned int irow,unsigned int icol)
{
	int i,j;
	char ch='\0';
	for(i=irow;i>=1;i--)
	{
		for(j=1;j<=icol;j++)
		{	
			if(i<=j)
			printf("*\t");
			else
			printf(" \t");	
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iValue1=0,iValue2=0;
	printf("enter number of rows\n");
	scanf("%u",&iValue1);
	printf("enter number of columns\n");
	scanf("%u",&iValue2);
	pattern(iValue1,iValue2);
	return 0;
}
