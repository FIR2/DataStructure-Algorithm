/*----------------------Implementaion of queue throw DynamicArray--------------------------*/
#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class DynamicQueue
{
  private:  
    int capacity;
    int front,rear;
    int ptr;
  protected:
    void doubleQueue();
  public:
     void createDynamicQue(int cap);
     void insertDynamicQue(int data);
     void deleteDynamicArray();

};
/*--------------start DoubleQueue section------------------------*/
 void DynamicQueue::doubleQueue()
 { // create double capacity of new queue
    capacity *=2;
    int *temp;        //cerate pointer variable which is store address of double queue
               // crete a int i for trivers......
    if(int i=0; i<=rear;i++)
       temp[i]=ptr[i];
       
        delete []ptr;
       ptr=temp;
       
 }     
/*--------------End doubleQueue section------------------------*/


/*--------------start deleteDynamic Queue section------------------------*/
void DynamicQueue::deleteDynamicArray()
{
    if(front==-1)//when queue is empty
      {
          cout<<"DynamicQueue underflow.";
     else if(front==rear)// when queue have one element
        {
            front==-1;
            rear==-1;
        }
     else if(rear==capacity-1)//// when front capaciyt-1 ke equal ho to
         front=0;
      else
        front++;
     }
}
/*--------------start deleteDynamic array section------------------------*/

/* -----------------------start insertdynamic queue section------------------------------------*/
void DynamicQueue::insertDynamicQue(int data)
{
    if(ptr)
     {
        // when queue is full
        if(front==0 && rear==capacity-1 || rear+1==front)
            cout<<"Queue Overflow.";
         else if(rear==-1)// when queue is not available
           {
            front==0;
            rear==0;
            ptr[rear]=data;
           }
         else if(rear==capacity-1)//queue pura bhara huo hai or ak elmenet delete lrdiya tb insert krna hai
           {
            front==0;
            ptr[rear]=data;
           }  
         else
         {
            rear++;
            ptr[rear]=data;
         }

     }
}

/* -----------------------end insertdynamic queue section------------------------------------*/

/* -----------------------start createdynamic queue section------------------------------------*/
void DynamicQueue::createDynamicQue(int cap)
{
    if(ptr==NULL)//Yadi ptr pointer mein null hai tabhi DQ create hoga
    {
      capacity =cap;
      ptr=new int[cap];
      front=-1;
      rear=-1

    }
}
/*-----------------------------end createdynamic queue section---------------------------------*/
int main(){
    
    return 0;
}