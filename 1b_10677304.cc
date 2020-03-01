#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void MaxMin(int [], int , int, int*, int*);

int main( int argc, char **argv)
{ int Arr[500000],Num,i; int
iMax=0,iMin=0;
cout<<"\nEnter the size of the array\n"<<endl; 
cin>>Num;
cout<<"\nEnter the elements of the array:\n" <<endl;
for(i=0;i<Num;i++) scanf("%d",&Arr[i]); MaxMin(Arr,
0, Num-1, &iMax, &iMin);
cout<<"The Max Element is " << iMax << endl;
cout<< "The Min Element is" << iMin << endl;  
return 0;
}

void MaxMin(int a[],int low,int high, int *max, int *min)
{ int mid,max1,max2,min1,min2;
if(high-low == 1)
{ if(a[low] > a[high])
{
*max = a[low];
*min = a[high];
} else
{
*max = a[high];
*min = a[low];
}
}
else if(low == high)
{
*min = *max = a[low];
}
else if(low<high)
{ mid=(low+high)/2;
MaxMin(a,low,mid,&max1,&min1);
MaxMin(a,mid+1,high,&max2,&min2); if(max1 > max2)
*max = max1; else
*max = max2;
if(min1 < min2)
*min = min1; else
*min = min2;
}
}