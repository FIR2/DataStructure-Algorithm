/*=========+++++++++++++STACK IMPLEMENTATION THROW ARRAY++++++++++===========*/

#include<iostream>
#include<conio.h>
using namespace std;

class stack
{
 private:
   int capacity;
   int top;
   int *ptr;
  public:
//    //if we want to
//    stack(){capacity=0; top=-1;ptr=NULL;}
//    //OR
//    stack(int cap)
//    {
//      capacity=cap;
//      top=-1;
//      ptr=new int[cap];
//    }
   void createStack(int cap);
   bool isFull();
   void push(int data);
   bool isEmpty();
   void pop();
   int peek();
};
int stack::peek()
{
  if(!isEmpty())// yadi stack empty nahi hai to
    return ptr[top];// return kara diya top value
}

void stack::pop()
{
   if(isEmpty())
      cout<<"Stack Underflow";
    else
    {
        top--;
    }   

}

bool stack::isEmpty()
{
   return top==-1;
}

void stack::push(int data)
{
  if(isFull())
     cout<<"Stack Overflow.";
   else
   {
      top++;
      ptr[top]=data;
   }
}

bool stack::isFull()
{
   return top+1==capacity;
}

void stack::createStack(int cap)
{
    // aur ye code tabhi chalega jb cap ki value zero se bada hai
   while(cap>0)
   {  // ydi koi ak se adhuk bar createstack ko call krde to aise mein phle point kr rahe array ko delete krna hoga vrn memory likage hogi
     if(ptr!=NULL)
        delete []ptr;
      capacity=cap;
      top=-1;
      ptr=new int[cap];
   }
}

int main()
{
   stack s;
   s.createStack(10);
}