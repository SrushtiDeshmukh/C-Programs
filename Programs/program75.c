//Accept N numbers from user and return the minimum no.
#include<stdio.h>
#include<stdlib.h>
int Minimum(int arr[],int iLength)
{
	int i,iMin=0;
	if((arr==NULL)||(iLength==0))
	{
		return -1;
	}
	iMin=arr[0];
	for(i=0;i<iLength;i++)
	{
		if(arr[i]<iMin)
		{
		iMin=arr[i];
		}	
	}
	
	return iMin;	
}
int main()	
{
	int *p=NULL,i=0,iSize=0,iRet=0;
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		printf("Unavailable to allocate memory\n");
		return -1;	
	}	
	printf("Enter the elements\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	iRet=Minimum(p,iSize);
	printf("minimum no of array %d\n",iRet);
	
	free(p);
	return 0;
}
