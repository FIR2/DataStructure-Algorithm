/*-----------------Implementation of Queue throw Array--------------------*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class queue
{
  private:
    int capacity;
    int front,rear;
    int *ptr;
  public:
  queue(){ptr==NULL;}
    void createQueue(int cap);
    void insertQueue(int data);
    void deleteQueue();
    int getFront();
};
/*-------------------getFRONT  START--------------------------*/
int queue::getFront()
{
 if(front!=NULL)
    return ptr[front];
}
/*-------------------getFRONT  START--------------------------*/

/*-------------------Delete QUEUE START------------------------*/
void queue::deleteQueue()
{// when queue is not available
  if(front==-1)
     cout<<"Queue Underflow.";
   else if(front==rear)//when queue have only one element
      {
        front==-1;
        rear==-1;
      }
   else if(front==capacity-1)// when front capaciyt-1 ke equal ho to
       front=0;
     else
        front++;  
}
/*-------------------Delete QUEUE END ------------------------*/

/*--------------------INSERTION START-------------------------*/
void queue::insertQueue(int data)
{   
  //ye pura ka pura code tb chalega jab ptr kisi array ka address na rakhta ho means null ho
  if(ptr)
    {
    //when queue is full
     if(front==0 && rear==capacity-1 || rear+1==front)
         cout<<"Queue Overflow.";
       else if(rear==-1)  // when queue is not available
          {
           front = 0;
           rear = 0;
           ptr[rear]=data;
          }
       else if(rear=capacity-1)//queue pura bhara huo hai or ak ak element delete kardiya to    
          {
           rear==0;
           ptr[rear]=data;
          }
       else
         {
          rear++;
          ptr[rear]=data;
         }
    }  
} 
/*------------------------INSERTION END------------------------------*/

/*------------------------CREATE QUEUE START--------------------------*/
void queue::createQueue(int cap)
{
  if(ptr==NULL)
  {
    capacity = cap;
    ptr = new int[cap];
    front =-1;
    rear = -1;
  }  
}
/*-----------------------CREATE QUEUE END----------------------------*/
int main(){
    queue q;
    q.createQueue(5);
    q.insertQueue(2);
    q.getFront();
    q.deleteQueue();
    return 0;
}