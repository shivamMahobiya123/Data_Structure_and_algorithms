#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int data;
  Node * next;
};
void push(Node** href_data,int new_data )
{
  Node* new_node=new Node();
  
  new_node->data=new_data;
  new_node->next= (*href_data);
  (*href_data)=new_node; 
}

void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
 

int main()
{
  
  Node* head = NULL;
 
    // Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    puts("Created Linked List: ");
    printList(head);
  return 0;
}
