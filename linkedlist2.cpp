#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 //singly linked list
  //In this linked list,it stores address of next node only.
  struct simplynode
  {
    int a ;
    struct simplynode *next1;
  };
  //doubly linked list
  //In this linked list,it stores address of previous node and next node .
    struct doublynode
  {
    int b ;
    struct doublynode *next2;
    struct doublynode *prev2; 
  };
  //circular  linked list
  //In this linked list,it stores address of next node .At last node contains address of first node only.
    struct circularnode
  {
    int c ;
    struct circularnode *next1;
  };
  
  //doubly circuar linked list
  // In this linked list,it stores address of previous node and next node .At last node contains address of first node and also first node to last node
    struct doublycircularnode
  {
    int d ;
     struct doublycircularnode *next2;
    struct doublycircularnode *prev2;   
   };
 return 0;
}
