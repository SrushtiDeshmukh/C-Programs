//Accept the no from user and print addition even nos
#include<stdio.h>
#include<stdlib.h>
int Display(int arr[],int iSize)
{
	int i=0,iSum=0;
	for(i=0;i<iSize;i++)
	{
		if((arr[i]%2)==0)
		{
			iSum=iSum+arr[i];
		}
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
		return -1;
	}
	printf("enter the elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet=Display(arr,iLength);
	printf("addition of even elements %d\n",iRet);
	free(arr);
	return 0;
}

