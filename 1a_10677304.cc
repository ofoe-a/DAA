#include<iostream>
#include<stdio.h>
//comment

using namespace std;
int BSearch(int A[], int k, int Low,int High); 

int main(void)
{
int Arr[20],Num,Key;
int i,iPosition=0;
cout<<"\nEnter the size of the array\n";
cin>>Num;
cout<<"\nEnter the elements of the array in ascending order:\n";
for(i  =0;i<Num;i++)
cin>>Arr[i];
cout<<"\nEnter the key element\n";
cin>>Key;
iPosition=BSearch(Arr,Key,0,Num-1);
if(iPosition==-1)
cout<<"\nThe Element cannot be found\n";
else
cout<<"\nThe Element was found at %d\n"  << iPosition+1;
return 0;
}

int BSearch(int A[], int k, int Low,int High)
{
int Mid;
if(Low<=High)
{
Mid=(Low+High)/2;
if(k==A[Mid]) 
return Mid;
if(k<A[Mid])
return BSearch(A,k,Low,Mid-1);
if(k>A[Mid])
return BSearch(A,k,Mid+1,High);
}
else
return -1;
}
