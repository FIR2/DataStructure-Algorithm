#include<iostream>
using namespace std;




/*<-----------------==========------------------START HEAPIFY FUNCTION SECTINO-----------------=========------------------->*/
void Heapify(int arr[], int size, int i)// argument mein arra , arra size and jisko heapify krne h usak index
{
 
  int rootIndex = i;
  int leftIndex = 2*i;
  int rightIndex = 2*i+1;

  if( leftIndex <= size && arr[rootIndex] < arr[leftIndex])
   {
     rootIndex = leftIndex;
   }


   if( rightIndex <= size && arr[rootIndex] < arr[rightIndex])
    {
      rootIndex = rightIndex;
    }
    

    if(rootIndex != i)
    {
      swap( arr[rootIndex], arr[i]);
      Heapify(arr,size, rootIndex);
    } 

}
/*<-----------------==========------------------END HEAPIFY FUNCTION  SECTINO-----------------=========-------------->*/




/*<-----------------==========------------------START SORT IN HEAP  SECTINO-----------------=========-------------->*/
void heapSort(int arr[], int n){
    int size = n;

    while(size > 1)
     {
        // stpe:1- swap
        swap(arr[size] ,arr[1]);
        size--;

        // step:2- 
        Heapify(arr, size , 1);
     }
}
/*<-----------------==========------------------END SORT IN HEAP  SECTINO-----------------=========-------------->*/



int main(){

    int arr[6] {-1, 54, 53, 55, 52, 50};
    int n=5;

    // create Heap
    for(int i=n/2;i>0; i--){
        Heapify(arr, n, i);
    }
    cout<<"Print arra now"<<endl;

    for(int i = 1; i<=n; i++)
    {
        cout<<arr[i]<< " ";
    }cout<< endl;


//    heapSort
     heapSort(arr, n);

     cout<<"Sorted arra :";
    for(int i = 1; i<=n; i++)
    {
        cout<<arr[i]<< " ";
    }cout<< endl;
}