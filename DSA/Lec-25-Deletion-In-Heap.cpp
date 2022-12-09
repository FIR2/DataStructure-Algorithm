#include<iostream>
using namespace std;



// create a class
class Heap
{
  public:
    //   create a array
    int arr[100];
    // starting mein array ka size zero (0) hoga 
    int size = 0;
    // int size 


    // create a constructor
    // Heap()
    // {
    //     arr[0]=-1;
    //     size = 0;
    // }



 /*<-----------------============------------------START INSERT INTO HEAP SECTION---------------=============--------------------->*/
    void insert(int value)
    {
      //    logicaly new element ko end mein dalna hai
        size = size + 1;
      //   element ka index fine krlenge
        int index = size;
      // ab mile hue index pr value dalna hai
        arr[index]= value;
      // value ko array mein dalne ke bad usko correct postion pr leakr jana hai
    
      // while loop chalayenge tbtak jabtak insert kiye jane wale value ki index 1  se bada hai  agar 1 hogya to parent or new value  same ho jaynge
        while(index > 1)
        {
          // parent ka index nikal late hain
           int parentIndex = index/2;
            // compare kr lenge parent and child value  ko
           if(arr[parentIndex] < arr[index])
           {
             swap(arr[parentIndex],arr[index]);
            //  and update krdenge index ko
             index = parentIndex;
           }
           else
           {
            //inserted value apne sahi postion pr agya hai 
            return ;
           }
        }
    }
/*<-----------------==========------------------END INSERT INTO HEAP SECTINO-----------------=========------------------->*/



/*<-----------------==========------------------START PRINT HEAP VALUE SECTINO-----------------=========------------------->*/
    // prnit the sorted value
   void print()
   {
    //  new value index 1 se insert kiya jaraha hai ialiye loop 1 se start hoga
    for(int i =1; i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
/*<-----------------==========------------------END PRINT HEAP VALUE SECTINO-----------------=========------------------->*/


/*<-----------------==========------------------START DELETE FROM HEAP SECTINO-----------------=========------------------->*/
   void deletFromHeap()
  {
    //IF ARRAY IS EMPTY THEN
    if(size == 0)
    {
        cout<<"nothing to delete" <<endl;
        return;
    }

    //Step:1. Put last index element into first index.
      arr[1] = arr[size];

    //Step:2. Remove last element.
      size--;

    //Step:3 . Take root node its correct position.
    int i = 1;
    while(i<size)
    {
        int leftIndex = i*i;
        int rightIndex = 2*i+1;

         if(leftIndex < size && arr[i] < arr[leftIndex])
         {
           swap(arr[i],arr[leftIndex]);
          //Update akrdo leftindex ko
           i = leftIndex;
         }
         else if(rightIndex  < size && arr[i] < arr[rightIndex])
         {
            swap(arr[i],arr[rightIndex]);
          //Update akrdo leftindex ko
            i = rightIndex;  
         }
         else
         {
            return;
         }

    }
 } 
/*<-----------------==========------------------END DELETE FROM HEAP SECTINO-----------------=========------------------->*/
};
/*<-----------------==========------------------END HEAP CLASS SECTINO-----------------=========------------------------->*/





/*<-----------------==========------------------START HEAPIFY FUNCTION SECTINO-----------------=========------------------->*/
void Heapify(int arr[], int size, int i)// argument mein arra , arra size and jisko heapify krne h usak index
{
 
  int rootIndex = i;
  int leftIndex = 2*i;
  int rightIndex = 2*i+1;

  if( leftIndex < size && arr[rootIndex] < arr[leftIndex])
   {
     rootIndex = leftIndex;
   }


   if( rightIndex < size && arr[rootIndex] < arr[rightIndex])
    {
      rootIndex = rightIndex;
    }
    

    if(rootIndex != i)
    {
      swap( arr[rootIndex], arr[i]);
      Heapify(arr,size, rootIndex);
    } 

}

/*<-----------------==========------------------END HEAPIFY FUNCTION  SECTINO-----------------=========------------------->*/






int main()
{
    
 Heap H;
    // H.insert(50);
    // H.insert(55);
    // H.insert(53);
    // H.insert(52);
    // H.insert(54);
    H.insert(65);
     H.insert(76);
      H.insert(30);
      H.insert(40);
      H.insert(20);
      H.insert(85);
      H.insert(48);
      H.insert(96);
    H.print();

    //  H.deletFromHeap();
    // H.print();


    // take a array for heapify function
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int size = 5;
    for(int i=size/2; i>0;i--)
    {
      Heapify(arr, size, i);
    }

    cout<<"Printing the array now "<<endl;
    for(int i = 1; i<=size;i++)
    {
      cout<< arr[i] << " ";
    }cout << endl;
    return 0;
}



