//Pattern printing by recursion
#include<stdio.h>

void Display(int iCol)	
{
		static int j=1;
		if(j<=iCol)
		{
			printf("*\t");
			j++;
			Display(iCol);	
		}
	j=1;
}

void DisplayR(int iRow,int iCol)	
{
	static int i=1;
	if(i<=iRow)
	{
		Display(iCol);	
		printf("\n");
		i++;
		DisplayR(iRow,iCol);	
	}
}


int main()
{
	int iNo1=0,iNo2=0;
	printf("Enter no of rows and columns\n");
	scanf("%d %d",&iNo1,&iNo2);
	
	DisplayR(iNo1,iNo2);
}
