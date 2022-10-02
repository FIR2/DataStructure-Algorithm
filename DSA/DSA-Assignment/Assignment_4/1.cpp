//         <!--Define linked list with following services..  -->
// a. insert list item as first node.
// b. insert list item as last node.
// c. insert list item after given node.
// d. delete first list item.
// e. delete last list item.
// f. delete a particular node.
// g. view all list item.
// h. search a list item.
// i. constructor.
// j. destructoe.

#include<conio.h>
#include<stdio.h>
#include<iostream>
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
    // create a new pointer variable (t) 
     node *t;
    //create new node and assign address in new pointer variable n
     node *n=new node;
    //now ready to node
     n->item=data;
     n->next=NULL;
// check condtion
    if(start==NULL)// 2nd senerio when list is empty..
      {
        start=n;
      }
      else// 1st senorio when list having some node..
      {
        t=start;
        // t->next==NULL   // agar t ke next mein null hai to yah last node hai or yahi pr new nod einsert hoga
        // t ke next mein null nahi to
        while(t->next!=NULL)
            t=t->next;
            // new node ka address t ke next mein rakh denge
            t->next=n;
      }     
   }
   int main()
    {
        SLL list1;
        list1.insertAtLast(10);
    }

