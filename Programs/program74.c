//Accept N numbers from user and return the maximum no.
#include<stdio.h>
#include<stdlib.h>
int Maximum(int arr[],int iLength)
{
	int i,iMax=0;
	if((arr==NULL)||(iLength==0))
	{
		return -1;
	}
	iMax=arr[0];
	for(i=0;i<iLength;i++)
	{
		if(arr[i]>iMax)
		{
		iMax=arr[i];
		}	
	}
	
	return iMax;	
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
	iRet=Maximum(p,iSize);
	printf("maximum no of array %d\n",iRet);
	
	free(p);
	return 0;
}
