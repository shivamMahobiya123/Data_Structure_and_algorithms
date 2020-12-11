#include<iostream>
using namespace std;
int main()
{
 int n ,array[100],pos,k; 
  for(int i=0;i<n-1;i++)
  {
    cin>>array[i];
  }
  cin>>k;
  for(int i=0;i<n-1;i++)
  {
    if(array[i]==k)
    { 
      pos=i;
      break;
    }
  }
  cout<<k<<"is in position :"<<pos+1;
return 0;
}
