//singly linked list
// insert  a node at first 
#include<iostream>
#include<conio.h>
#include<stdio.h>// null likh sake iskeliye hamne add kiya hai
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
    void insertAtStart(int data); 
    void insertAfter(int value,int data);
    void insertAtLast(int data);
    void deleteFirst();
    void deleteNode(int value);
    void deleteLast();
    void viewList();
    ~SLL();// DESTRUCTOR KA KAM KYA HAI:- JAB KBHI LINKED LIST K OBJECT(List1) DETROYE HO RAHA HOga tb destrcutor chalega
};
 SLL::~SLL()
  {
    // jabtak start mein null nahi ajata tabtak delete karo first
      while(start)
        deleteFirst();
  }

  void SLL::viewList()
  { 
    node *t;
    t=start;
    // jab tak chalega jab tak t mein zero ni ajata
    while(t)
    {
      //print karaynge item ki value..
        cout<<t->item<<" ";
      //fhir agle node ko point krne ke liye or agle node pr jane ke liye
        t=t->next;
    }
  }

  
void SLL::deleteLast()
{  
    // case 2
    if(start==NULL)
      {
        cout<<"List is empty."<<endl;
      }
    else   // case 1
     {
      node *t1,*t2;
      t1=start;
      t2=NULL;
     //jab list mein 1 se jiyade node hain tab..
      while(t1->next!=NULL)
           { t2=t1;
            t1=t1->next;
           }
          //  jab list mein 1 hi node hai tab
           if(t2==NULL)
               {start=NULL;}
              else 
                {t2->next=NULL;}
             delete t1;
      }
     
}

 void SLL::deleteNode(int value)
  {
    // create poninter variables for triverse
     node *t1,*t2;
     t1=start;
     t2=NULL;
    //  loop tabb tak chalega jab tak ki t1 zero(null ) na  ho jaye
     while(t1)
       {
        //  yadi jo node delete karna hai vo milgya
          if(t1->item==value)
              break;
          // nahi mila to treverse krte rahnge 
          t2=t1;// t2 mein fist t1 ka addres assign kerte jayenge   
          t1=t1->next;
       }
      //  loop se bahar aynge means ya to loop poora chala hai means wo node mili hi nahi 
      // ya jo node delete k rna hai wo mile gyi hai aur breack ke throw aya hun bahar
        if(t1==NULL) // mtlb loop pura chala hai aur node ni mila h jisko delete krna tha
            {
            cout<<"No item with the value"<<value<<"in the list.";
            }
           else// else mein aye ki wah node milgya h jiko delete krna h
            {           // ismein bhi 2 case honge ya to wo first node hoga ya biche ka koi node hoga jiko delete krne hai
              // yadi delete krne wala node phla hi node hai to
              if(t2=NULL)
                  start=t1->next;
                else  
                  t2->next=t1->next; // agar delete krne wala node  koi bice ka node hai to
                  delete t1;
                
 
            }     
  }

  void SLL::deleteFirst()
  {   
     node *r;
    // 2nd senerio
    if(start==NULL)
       {
        cout<<"List is Empty."<<endl;
       }
      else// 1st senerio
       {
        r=start;
        start=r->next;
        delete r;
       }

  }

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


void SLL::insertAfter(int value, int data)
{
  // triverse krne ke liye new node cahiye 
  node *t;
  node *n;
  t=start;
  //  loop tab tak chalega jab tak t mein null nahi ajata hai
  while(t)
   {
    // if we find node which after insert new node 
       if(t->item==value)
          break;
      t=t->next;// TRIVERSE KARAYA JARAHA HAI LOOP KO
   }
    // yadi break ke throw bahar aya hun to mtlb t mein null nahi hai
    if(t!=NULL) // MEANS NODE FAOUND
      {// READY TO ADD NEW NODE IN THE LIST
          n=new node;
          // node ko ready karnge
          n->item=data;
          n->next=t->next;// new node ke next mein t ka next rakhnge tabhi to new node ke bad wale node ka address  new node me ayega
        
          //  yadi t last wale node ko point kr raha hota tab
          //  t->next=n;
          //  n->next=NULL;

          // new nod ka address new node ke phle wale node mein rakhna padega 
          t->next=n;
      }
      else  // agar node mila hi nahi tb
      {
        cout<<" No item with value "<<value<<" in the list.";
      }
}

void SLL::insertAtStart(int data)
{
    node *n=new node;
    n->item=data;
    //first senerio when assign the start in new node next
    n->next=start;
    // 2nd senero  assign into new node next null
    // n->next=NULL;
    start=n;

}
int main()
{
    SLL list1;
    list1.insertAtStart(1);
    list1.insertAfter(3,2);
    list1.insertAtLast(3);
    list1.deleteFirst();
    list1.deleteLast();
    list1.deleteNode(2);
}


