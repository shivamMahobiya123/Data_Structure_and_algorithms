#include<iostream>
using namespace std;
int main()
{
 int n ,array[100],pos,k; 
 n=0,k=0,pos=0;
 cout<<"Enter length of array";
 cin>>n;
 cout<<"Enter array";
  for(int i=0;i<n;i++)
  {
    cin>>array[i];
  }
 cout<<"Enter value to find";
  cin>>k;
  for(int i=0;i<n;i++)
  {
    if(k==array[i])
    { 
      pos=i;
      break;
    }
  }
  cout<<k<<"is in position :"<<pos+1;
return 0;
}
