//Accept N numbers from user and display all such numbers which contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>
void Display(int *arr,int iSize)
{
	int i=0,iRem=0;
	printf("Elements which contain 3 are\n");
	for(i=0;i<iSize;i++)
	{
		while(arr[i]!=0)
		{
			iRem=arr[i]%10;
			if(iRem==3)
			{
				printf("%d\n",arr[i]);
				break;
			}
			arr[i]=arr[i]/10;
		}
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
	printf("\n");
	Display(arr,iSize);
	
	free(arr);
	return 0;
}
