/*-****************** CIRCULAR LINKED LIST***************/
/*******Define Circular linked list with following services***********/
// a. insert list item as first node.
// b. insert list item as last node.
// c. insert list item after a given node.
// d. delete first list item.
// e. delete last list item.
// f. delete a particular node.
// g. view all list elements.
// h. search item.
// i. constructor.
// j. destructor.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

class CLL
{
    private:
     struct node
      {
         int item;
         node *next;
      };
      node *last;
    public:
         CLL(){last=NULL;}
      void insertAtStart(int data);
      void insertAtLast(int data);
      void deleteFirst();
      void deleteLast();
      ~CLL();
        
};
 CLL::~CLL()
 {
  // jab tak last mein null nahi ajata 
    while(last)
    //  delete karte raho first node ko
    deleteFirst();
 }
void CLL::deleteLast()
{
  node*t;
//   CASE:1 

  if(last)
   {
    // jb list mein 1 node hai to
   if(last->next==last)
     {
       delete last;
       last=NULL;
     }
     else //jab list mein 1 se jiade node hai to
     {
        t=last->next;
       while(t->next!=last)
       t->next=last->next;
       delete last;
        last=t;
     }
   }
  else
   {
    cout<<"List is empty";
   }
}
void CLL::deleteFirst()
{
  node *t;
//   case:1
  if(last)
   {
    //   yadi list mein 1 node hai to
     if(last->next==last)
      {
        delete last;
        last=NULL;
      }//yadi list mein 1 se jiayde node hai to
      else
      {
        t=last->next;
        last->next=t->next;
        delete t;
      }
   } //case:2- jab list mein ak bhi node nahi hai
   else
   {
      cout<<"List is empty";
   }
}
void CLL::insertAtLast(int data)
{
    node *n;
    n=new node;
    n->item=data;
    if(last=NULL)
     {
        n->next=n;
        last=n;
     }
     else
     {
      n->next=last->next;
      last->next=n;
      last=n;
     }
}
void CLL::insertAtStart(int data)
{
    node *n;
    n=new node;
    n->item=data;
    if(last=NULL)
      {
         n->next=n; 
         last=n;
      }
      else
      {
         n->next=last->next;
         last->next=n;
      }
 }
int main()
{
  CLL obj;
  obj.insertAtStart(10);
  obj.insertAtLast(20);
  obj.deleteFirst();
  obj.deleteLast();
}