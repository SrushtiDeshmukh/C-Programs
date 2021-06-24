//Accept n no from user display addition of that no.
#include<stdio.h>
#include<stdlib.h>
int Display(int arr[],int iSize)
{
	int i=0,iSum=0;
	if((arr==0)||(iSize==0))
	{
		return -1;
	}
	printf("Addition of array elements \n");
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+arr[i];	
	}
	return iSum;
}
int main()
{
	int *arr=NULL;
	int i=0,iLength=0,iRet=0;
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
	iRet=Display(arr,iLength);
	printf("%d\n",iRet);
	free(arr);
	return 0;
}

