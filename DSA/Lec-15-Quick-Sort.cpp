#include<iostream>
using namespace std;

int partition(int arr[],int s, int e)
{
   int pivot = arr[s];// take pivot at starting index

   // kitne aise element  hai arrray m jo pivot value se chote hai unko count krlenge
    int count = 0;//initialy zero and count ke liye for loop chala diye
    for(int i=s+1; i<=e;i++)
    {
       if(arr[i] <= pivot)
       {
         count++;
       }
    }
    //place pivot at right position
    int pivotIndex = s + count;
      swap(arr[pivotIndex],arr[s]);


      // left and rigth part ko sambhal late hain
      int i = s, j = e;
      while(i < pivotIndex && j > pivotIndex)
       {
           while(arr[i] < pivot)//pivot ke left wala element chota hai pivot se tab tak chalte  raho
           {
             i++;
           }

           while(arr[j] > pivot) //pivot ke rigth wala element bada hai pivot se tab tak chalte  raho
           {
            j--;
           }
          // dono loop nahi chale tb mtlb ye ki left element pivot se bada ha ot reght element pivote se chota hai tb swap kra lenge
         // yadi uper ke dono while loop nahi cahle mtlb left wala element bada hai ot rigth wala chota hai pivot se tb
           if(i<pivotIndex && j>pivotIndex)
             {
                swap(arr[i++],arr[j--]);
             } 
        }

       return pivotIndex;

}



void quickSort(int arr[], int s, int e)
{
//Base Case => yadi zero element h to array soretd hai aur yadi one element hai array m to bhi array sorted hai
   if(s >=e )
       return;

   //Partition Karenge
    int p = partition(arr,s,e);

/*---------Starat Recursion  ---------*/  
    //Left part sorting
     quickSort(arr,s,p-1); 
   // Right part sorting
     quickSort(arr,p+1,e);  
}


int main(){
    int arr[10]={2,4,1,6,9,5,6,8,9,10};// array initialize and declaration
    int n=10;//array size
    quickSort(arr,0,n-1);//call quickSort function


    // Print sorted Array
    for(int i=0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<< endl;



    return 0;
}