//Accept the no from user and print count of even nos
#include<stdio.h>
#include<stdlib.h>
int CountEven(int arr[],int iSize)
{
	int i=0,iCnt=0;
	if((arr==0)||(iSize==0))
	{
		return -1;
	}
	printf("Array elements are \n");
	for(i=0;i<iSize;i++)
	{
		if((arr[i]%2)==0)
		iCnt++;	
	}
	return iCnt;
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
	iRet=CountEven(arr,iLength);
	printf("Total even nos are :%d\n",iRet);
	free(arr);
	return 0;
}

