                       // Assignment :-> Dynamic Array
  // Implement dynamic array Data Structure  With following services
    //  a. Crate an array
    //  b. Append an item.
    //  c. Insert an item.
    //  d. count total items presents.
    //  e. Get item at given index.
    //  f. Delete an item from a given index.
    //  g. Edit an item.
    //  h. Search an item.
    //  i. View all itema.
    //  j. Constructor.
    //  k. Destructor.

#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class DynamicArray
{
    private:
       int capacity;
       int lastIndex;
       int *ptr;
    protected:
       void doubleArray();
       void halfArray();   
    public:
       void createArray(int cap);
       void append(int data);
       void insertArray(int index,int data);
       void del(int index);
       void edit(int index,int data);
       int search(int data);
       int count();
       int getItem(int index);//For Value Reterive....
       ~DynamicArray();

};
   DynamicArray::~DynamicArray()
   {
      delete []ptr;
   }
 void DynamicArray::halfArray()
 {
  capacity /=2;
  int *temp;
 temp=new int[capacity];
 for(int i=0;i<=lastIndex;i++)
   temp[i]=ptr[i];
   delete []ptr;
   ptr=temp;
 }
 void DynamicArray::doubleArray()
   { //new array ki capacity doguni kardiya
      capacity *=2;
      // new  pointer vraible banya jiske ander new double array ka addres store karnege
      int *temp;
      // new array banya/doublyArray  
       temp=new int[capacity];
        //copy data from old array to new array
       for(int i=0;i<=lastIndex;i++)
         temp[i]=ptr[i];
        //old array ko delete kr diya
         delete []ptr;
         //new array ka address  old array ke ptr mein rakhdiya
         ptr=temp;

   }
int DynamicArray::getItem(int index)
  {
   if(index<0 ||index>lastIndex)
      
         cout<<"\nOperation Failed : Invalid Index";
      
      else
      {
         return ptr[index];
      }
  }

int DynamicArray::count()
  {
    return lastIndex+1;
  }

int DynamicArray::search(int data)
  {
   int i;
   for(i=0;i<=lastIndex;i++)
     {
      if(ptr[i]==data)
         return i;
      return -1;   
     }
  }

void DynamicArray::edit(int index,int data)
  {
   if(index<0 || index>lastIndex)
     {
      cout<<"\nOperation Failed : Index Invalid";
     }
     else
     {
      ptr[index]=data;
     }
  }

void DynamicArray::del(int index)
  {
     int i;  
     if( index<0 || index>lastIndex)
       {
         cout<<"\nOperaton Failed : Invalid Index or Empty Array";
       }
       else
       {
          for(i=index;i<lastIndex;i++)
            {
               ptr[i]=ptr[i+1];
               lastIndex--;
            }
       }
  }

void DynamicArray::insertArray(int index,int data)
 {
    int i;
    if(index<0 || index>lastIndex+1)
     {
        cout<<"\nOperation Failed: Invalid Index";
     }
     else if(lastIndex+1 == capacity)
      {
        cout<<"\nOperation Failed:Array overflow";
      }
      else
      {
        for(i=lastIndex;i>=index;i--)
           
            ptr[i+1]=ptr[i];
            ptr[index]=data;
            lastIndex++;
           
      }

 }
void DynamicArray::append(int data)
 {
   if(lastIndex+1 == capacity)
      {
        cout<<"\nOperation Failed: Array overflow";
      }
      else
      {
        ptr[lastIndex]=data;
        lastIndex++;
      }
 }
void DynamicArray::createArray(int cap)
 {
    ptr = new int[cap];
    capacity =cap;
    lastIndex = -1;
 }


 //Code by Other programer which is access my data structure
int menu()
{
   int choice; 
   cout<<"\n1.Append";
   cout<<"\n2.Insert";
   cout<<"\n3.Delete";
   cout<<"\n4.Edit";
   cout<<"\n5.Search";
   cout<<"\n6.Exit";
   cout<<"\n7.Enter your choice :";
   cin>>choice;
   return choice;
}

void viewArrayData(DynamicArray &obj)
{
   int i;
   cout<<endl;
   for(i=0;i<obj.count();i++)
     cout<<obj.getItem(i)<<" ";
}

int main()
{
   int data,index;
    DynamicArray obj;
    obj.createArray(6);
    while (true)
    {
       system("cls");
       cout<<"\nTotal Elements in Array:"<<obj.count();
       viewArrayData(obj);
     switch(menu())
     {  
      case 1:
        cout<<"Enter data to append :";
        cin>>data;
        obj.append(data);
        break;
      case 2:
        cout<<"Enter data to insert :";
        cin>>data;
        cout<<"Enter index to insert :";
        cin>>index;
        obj.insertArray(index,data);
        break;
      case 3:
        cout<<"Enter index for deletion :";
        cin>>index;
        obj.del(index);
        break;
      case 4:
        cout<<"Enter index to edit :";
        cin>>index;
        cout<<"Enter data to edit :";
        cin>>data;
        obj.edit(index,data);
        break;
      case 5:
        cout<<"Enter data to search :";
        cin>>data;
        index==obj.search(data);
        if(index==-1)
           cout<<"Search Failed";
          else
            cout<<"Element found at index ="<<index;
         break;
       case 6:
         exit(0);
         default:
            cout<<"Invalid Choice";        
     }
      getch();    
 }
    

    
    
}