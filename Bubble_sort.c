#include<stdio.h>
// void Bubble_sort(int A[],int n);
void Bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
        }
    }
}
void main()
{
    int n,i;
    int A[30]={};
    printf("Enter the Size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    Bubble_sort(A,n);
printf("The sorted array are:");
for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
}
}
