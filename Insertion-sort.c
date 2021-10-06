#include<stdio.h>
void insertion(int arr[], int size);
void main()
{
    int arr[30];
 int i,size;
 printf("Enter total no. of elements : ");
 scanf("%d",&size);
 for(i=0; i<size; i++)
 {
    printf("Enter %d element : ",i+1);
    scanf("%d",&arr[i]);
 }
 insertion(arr,size);
 printf("The sorted  Array elements are:");
 for(i=0; i<size; i++)
    printf(" %d",arr[i]);
 return 0;
}
void insertion(int arr[], int size)
{
 int i,j,key=0;
 for(i=1;i<size;i++)
 {
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
    arr[j+1]=arr[j];
    j=j-1;
}
arr[j+1]=key;
 }
 return 0;
}