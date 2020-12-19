#include<iostream>
using namespace std;
int searchbinary(int arr[],int f,int l, x)
{
  
  if(f<l)
  {
    int mid;
    mid=(f+l)/2;
    if(arr[mid]==x)
    {
      return mid;
    }
    else if(arr[mid]<x)
    {
      return searchbinary(arr,mid+1,l,x);
    }
    else
    {
      return searchbinary(arr,f,mid-1,x);
    }
   
  }
 return -1; 
}

int main()
{
  signed int arr[1000],n,x,result;
  for(int i=0;i!='\0';i++)
  {
    cin>>arr[i];
  }
  cout<<"\nEnter no you wanna to find:";
  cin>>x;
  n=sizeof(arr)/sizeof(arr[0]);
  result=searchbinary(arr,0,n-1,x);
  (result==-1)?cout<<"Number not found":
               cout<<"No found at position:"<<result+1;
  
}
