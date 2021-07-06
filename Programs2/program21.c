//Accept N numbers from user and return product of all odd elements.
#include<stdio.h>
#include<stdlib.h>
int ProductOdd(int arr[],int iLength)
{
	int i,iMult=1;
	if((arr==NULL)||(iLength==0))
	{
		return -1;
	}
	for(i=0;i<iLength;i++)
	{
		if(!(arr[i]%2==0))
		{
			iMult=iMult*arr[i];	
		}
	}
	if(iMult==1)
	{
		return 0;
	}
	else
	{
		return iMult;
	}
}
int main()
{
	int *p=NULL,i=0,iSize=0;
	int iRet=0;
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
	
	iRet=ProductOdd(p,iSize);
	printf("product of odd elements is %d\n",iRet);
	free(p);
	return 0;
}
