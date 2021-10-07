#include<stdio.h>
void  merge_sort(int A[],int lb,int ub);
void merge(int A[],int lb, int mid,int ub);
void main()
{  int A[10]= {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    int i;
    merge_sort(A,0,9);
    printf("The sorted array are:");
    for(i=0;i<10;i++)
    {
        printf("%d\t",A[i]);
    }

}
void merge_sort(int A[],int lb,int ub)
{
int mid;
if(lb<ub)
{
    mid=(ub+lb)/2;
    merge_sort(A,lb,mid);
    merge_sort(A,mid+1,ub);
    merge(A,lb,mid,ub);
}
}
 void  merge(int A[],int lb, int mid,int ub)
{
    int b[30];
    int i=lb;
    int j=mid+1;
    int k=lb;
    int s;
    while((i<=mid)&&(j<=ub))
    {
        if(A[i]<A[j])
        {
            b[k]=A[i];
            i++;
        }
        else{
            b[k]=A[j];
            j++;
        }
        k++;
    }
        if(i>mid)
        {
            while(j<=ub)
            {
                b[k]=A[j];
                k++;
                j++;
            }

        }
        else{
            while(i<=mid)
            {
                b[k]=A[i];
                k++;
                i++;
            }
        }
        s=lb;
        while(s<k)
        {
            A[s]=b[s];
            s++;
        }
}
