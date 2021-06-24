/*
    Row = 3
    Column = 3
 
    1   2   3
    *   *   *
    1   2   3
*/

#include<stdio.h>
void pattern(unsigned int irow,unsigned int icol)
{
	int i,j;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{	
			if((i%2)==0)
			printf("*\t");
			else
			printf("%d\t",j);	
		}
		printf("\n");
	}
}

int main()
{
	unsigned int iRow=0,iCol=0;
	printf("Enter no of rows\n");
	scanf("%d",&iRow);
	printf("Enter no of cols\n");
	scanf("%d",&iCol);
	pattern(iRow,iCol);
	return 0;
}
