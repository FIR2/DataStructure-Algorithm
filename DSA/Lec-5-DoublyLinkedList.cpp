#include<iostream>
#include<stdio.h> //null likh sake iskeliye hamne add kiya hai
#include<conio.h>
using namespace std;

class DLL
{
    private:
    struct node
    {
        node *prev;
        int item;
        node *next;
    };
    node *start;
    public:
    DLL(){start=NULL;}// constructor kam ye hai ki yah start ko karega initialize by NULL
    void insertAtStart(int data);
    void insertAtLast(int data);
    void insertAfter(int value, int data);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int value);
    void viewList();
    ~DLL();
};

 DLL::~DLL()
{
  while (start)  
    deleteFirst();

  
}

void DLL::viewList()
{
  node *t;
  t=start;
  while(t)
   {
    cout<<t->item<<" ";
    t=t->next;
   }
}
void DLL::deleteNode(int value)
{
    node *t2,*t1;
    t1=start;
    t2=NULL;
     while(t1)
     {
        if(t1->item=value)
          break;
        t2=t1;  
        t1=t1->next;
     }
     if(t1=NULL)//CASE:2
       {
         cout<<"List is empty";
       }
       else
       {
          t2->next=t1->next;
          t1->next->prev=t2;
       }
       delete t1;
}
void DLL::deleteLast()
{
    //CASE:2
  if(start=NULL)
  {
    cout<<"List is empty."<<endl;
  }
  else
        //CASE:1
  {  
    node *t2,*t1;
    t2=NULL;
    t1=start;
    while(t1->next!=NULL)
      { 
        t2=t1;
        t1=t1->next;
      }
    //yadi list mein 1 node hai tb
     if(t2==NULL)
        {start=NULL;}
      else
        {
            t2->next=NULL;
        }  
    delete t1;
  }     
}

void DLL::deleteFirst()
{
    node*t;
    start=t;
    if(t)
    {
      t->next=start;
      t->next->prev=NULL;
      delete t;
    }
    else
    {
        cout<<"List Empty";
    } 
}

void DLL::insertAtStart(int data)
{
    node *n;
    n=new node;
    // ready to node
     n->prev=NULL;
     n->item=data;
     n->next=start;
    //JOIN NEW NODE IN THE LIST..
     //jab list mein kuch node hai tb
     if(start)// jab tak start mein nul ni ajata tak means condition true hai tb tak
         start->prev=n;
      start=n;
}

void DLL::insertAtLast(int data)
{
    node*t;
    /*---------create new node---------------*/
    node *n;
    n=new node;
    /*--------new node create end-----------*/

    /*---------node ko ready karenge---------*/
    n->item=data;
    n->next=NULL;
    
    if(start==NULL)//JAB LIST EMPTY HAI
      {
         n->prev=NULL;
         start=n;
      }
      else
      {  // triverse node
        t=start;
        while(t->next!=NULL)
           t=t->next;
      // new node ke prev mein list ke  abhi tak ke last none ka  address rakh diya        
         n->prev=t;
       /*----------ready part end--------------*/  
       /*----------add  new node in the list-----*/     
         t->next=n;
      /*---------- end--------------*/ 
      } 
}


void DLL::insertAfter(int value,int data)
{
    node *n;
    node *t;
    t=start;
    while(t)
     {
        if(t->item==value)
            break;
        t=t->next;
     }
     if(t!=NULL)
        {
          /*----------CREATE NEW NODE-------------*/  
             n=new node;
             n->prev=t;
             n->item=data;
             n->next=t->next;
             /*---------END----------------------*/
            if(t->next!=NULL)//AGAR NODE BITCE KA KOI NODE  HAI TO 
                  t->next->prev=n;//new node ke bad ke prev mein new node add. rakhnge
             t->next=n;     //new node ke phle wale node ka pinter -> new node ka address.


        }
        else
        {
            cout<<"Either list is empty or value not found.."<<endl;
        }
}


int main()
{
    DLL Obj;

}