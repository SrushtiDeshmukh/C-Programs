//Enter no of rows and colums and print pattern as below.
// Input :  4   3
// Output :
/*
 
    *   *   *
    *   *   *
    *   *   *
 
 */
#include<stdio.h>
void pattern(unsigned int iRow,unsigned int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iNo1=0,iNo2=0;
	printf("Enter the rows\n");
	scanf("%d",&iNo1);
	printf("Enter the column\n");
	scanf("%d",&iNo2);
	pattern(iNo1,iNo2);
	return 0;
}

