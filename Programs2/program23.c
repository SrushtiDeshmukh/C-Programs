//5. Accept N numbers from user and display summation of digits of each number.
#include<stdio.h>
#include<stdlib.h>
void Summation(int *arr,int iSize)
{
	int i=0,iRem=0,iSum;
	printf("Summation of digit is\n");
	for(i=0;i<iSize;i++)
	{
		iSum=0;
		while(arr[i]!=0)
		{
			iRem=arr[i]%10;
			iSum=iSum+iRem;
			arr[i]=arr[i]/10;
		}
		printf("%d\n",iSum);
	}
	
}
int main()
{
	int *arr=NULL;
	int i=0,iSize=0;
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize*sizeof(int));
	
	if(arr==NULL)
	{
		printf("Unavailable to allocate memory\n");
		return -1;
	}
	printf("Enter the array elements\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Summation(arr,iSize);
	
	free(arr);
	return 0;
}
