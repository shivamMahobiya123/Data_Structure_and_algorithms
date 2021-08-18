#include<iostream>
#include<sstream>
using namespace std;
int numb_word(string s)
{
  stringstream str(s);
  string word;
  int count=0;
  while(str>>word)
    count++;
  return count;
}

int main()
{
  string str="Hello I am good here";
  cout<<"Number of words :"<< numb_word(str);
  return 0;
}
