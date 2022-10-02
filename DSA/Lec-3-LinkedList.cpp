// singly linked list
//Insert a node at last in the list..

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class SLL
{
   private:
    struct node
    {
      int item;
      node *next;
    };
    node *start;
   public:
    SLL(){start=NULL;}
    void insertAtLast(int data); 
};
void SLL::insertAtLast(int data)
  {  
    node*t;
    //   make a node
      node *n=new node;
    //   ready to node
    n->item=data;
    n->next=NULL;
    // join new node into list
    if(start=NULL)
      {start=n;}
      else
      {
        t=start;
        while(t->next!=NULL)
           t=t->next;
           t=n;
      }
  }
int main(){
       SLL list1;
       list1.insertAtLast(20);
    return 0;
}