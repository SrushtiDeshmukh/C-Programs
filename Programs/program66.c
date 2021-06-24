//Accept n no from user and display that no.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
	int i=0;
	if((arr==NULL)||(iSize==0))
	{
		return ;
	}
	printf("Elements from the array are:\n");
	for(i=0;i<iSize;i++)
	{
		printf("%d\n",Arr[i]);
	}
}
int main()
{
	int *arr=NULL;		//STEP 1
	int iLenth=0,i=0;

	printf("enter the no of elements\n");	//STEP 2
	scanf("%d",&iLenth);	
	
	arr=(int*)malloc(iLenth*sizeof(int));	//STEP 3
	if(arr==NULL)
	{
		printf("memory not allocated");
	}	
	
	printf("enter the elements\n");
	for(i=0;i<iLenth;i++)
	{
		scanf("%d",&arr[i]);
	}
	Display(arr,iLenth);	//Display(100,5)
	
	free(arr);
	return 0;
}
