
/*--------------------Implement DataStructure stack using Dynamic Array-------------------------*/
#include<iostream>
#include<conio.h>
using namespace std;

class stack
{
 private:
   int capacity;
   int top;
   int *ptr;
  protected:
    void doubleStack();
    void halfStack();
  public:
   void createStack(int cap);
   bool isFull(); 
   void push(int data);
   bool isEmpty();
   void pop();
   int peek();
};
void stack::halfStack()
{
    capacity /=2;
    int *temp;
    temp= new int[capacity];
     for(int i=0;i<=top;i++)
       temp[i]=ptr[i];
       delete []ptr;
       ptr=temp;
}
void stack::doubleStack()
{    
    int i;
     capacity *=2;
     int *temp;
     temp=new int[capacity];
     for(i=0;i<=top;i++)
       temp[i]=ptr[i];
       delete []ptr;
       ptr=temp;
}
int stack::peek()
{
  if(!isEmpty())// yadi stack empty nahi hai to
    return ptr[top];// return kara diya top value
}
void stack::pop()
{
    if(isEmpty())
        cout<<"Stack Underflow.";
     else
        top--;
}
bool stack::isEmpty()
{
    return top==-1;
}
void stack:: push(int data)
{
    if(isFull())
      cout<<"Stack Overflow.";
     else
       top++;
       ptr[top]=data; 
}

bool stack::isFull()
{
    return top+1==capacity;
}

void stack::createStack(int cap)
{
    capacity=cap;
    ptr = new int[cap];
    top==-1;
}

int main()
{
    stack s;
    s.createStack(6);
    
    s.push(10);
    // s.doubleStack();
    s.pop();
    s.peek();

}