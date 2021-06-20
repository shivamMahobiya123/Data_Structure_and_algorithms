#include <bits/stdc++.h>
#include<iostream>
using namespace std;

    int removeElement(vector<int>& nums, int val) {
     for(vector<int>::iterator i=nums.begin(); i!=nums.end(); )     
     {
         if(*i==val)
            i=nums.erase(i);
        else
            i++;
    }
        return nums.size();
    }

int main()
{
    vector<int> nums;
    int n,temp,i,j,val;
    cout<<"Enter the N number"<<endl;
    cin>>n;
    cout<<"\Enter preference etc..:\n";
    for(auto i=0; i<n; i++){ 
            for(j=0; j<n; j++){
            cin>>temp;
            nums.push_back(temp); 
                         }
                        }
    cout<<"Enter number to be removed";
    removeElement(nums,val);
    cout << "Output of begin and end: ";
    for(auto i = nums.begin(); i != nums.end(); ++i)
        cout <<nums[i] << " ";
    return 0;
}
