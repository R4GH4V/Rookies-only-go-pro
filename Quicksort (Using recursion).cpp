// Quicksort Algorithm (Using Recursion)


#include <iostream>
using namespace std;

//Swap elements
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

//To create pivot element and arrange the other elements around pivot.
int partition(int a[],int low,int high)
{
        int pivot=a[high];
        int i=low-1;
        for(int j=low;j<high;j++)
        {
            if(a[j]<pivot)
            {
            i++;
            swap(&a[j],&a[i]);
            }
        }
        swap(&a[i+1],&a[high]);
        return (i+1);    
}

//Recursive Quicksort
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}
    
//Driver program
int main()
{
  int a[]={42,51,5,22,65,13};
  int n=sizeof(a)/sizeof(int);
  quicksort(a,0,n-1);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
