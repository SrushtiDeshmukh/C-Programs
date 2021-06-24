//Accept the no from user and print even nos
#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int arr[],int iSize)
{
	int i=0;
	if((arr==0)||(iSize==0))
	{
		return;
	}
	printf("even elements from the array \n");
	for(i=0;i<iSize;i++)
	{
		if((arr[i]%2)==0)
		printf("%d\n",arr[i]);	
	}
}
int main()
{
	int *arr=NULL;
	int i=0,iLength=0;
	printf("enter the size of array\n");
	scanf("%d",&iLength);
	arr=(int*)malloc(iLength*sizeof(int));
	if(arr==NULL)
	{
		printf("unavailable to allocate memory\n");
	}
	printf("enter the elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	DisplayEven(arr,iLength);
	free(arr);
	return 0;
}

