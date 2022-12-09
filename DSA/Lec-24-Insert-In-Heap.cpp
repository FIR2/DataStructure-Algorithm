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



    // create a insertion function
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


//    deletion from HEAP
};





int main(){
    Heap H;
    H.insert(50);
    H.insert(55);
    H.insert(53);
    H.insert(52);
    H.insert(54);

    H.print();
}