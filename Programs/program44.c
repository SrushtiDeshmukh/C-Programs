//Accept no and print tha no of stars.
// Input : 5
// Output : *   *   *   *   *

#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    Pattern(iValue);
    return 0;
}

