#include<iostream>
using namespace std;

void merge(int *arr,int s, int e)
{
    int mid = (s+e)/2;

/*------array two part mein devide hogya first ann second---------*/
    // LENGHT OF FIRST ARRAY
     
 int length1 = mid - s + 1;        // m-1-s=m+s-1
    //LENGTH OF SECOND ARRAY
      int length2 = e - mid;
      
    //new ke help se 2 array create krlenge
    int *first = new int[length1];
    int *second= new int[length2];

//  copy values
    int mainArrayIndex =s ; 
    for(int i=0;i<length1;i++)
    {
      first[i]=arr[mainArrayIndex++];
    }

     mainArrayIndex = mid+1;
    for(int i=0;i<length2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }
/*---------------------LOGIC OD MERGE ARRAY--------------------------*/
   //Merge
   //trivers ke liye left array and rigth array ke index lelenge
   int index1 =0;
   int index2 =0;

   mainArrayIndex = s;
 
  
 //check krlenge ki triverse krte wakt aisa n ho ki array se bahar chale jaye  
   while(index1 < length1 && index2 < length2)
   {
      //ab dono array ke element ko compare ke sort krleneg choti vale phle and then badi value
       if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
   }
  
// alag alag bhi condition check kerlenge
  while(index1<length1)
  {
    arr[mainArrayIndex++] = first[index1++];
  }
  while(index2  < length2)
  {
    arr[mainArrayIndex++] = second[index2++];
  }
}






void mergeSort(int *arr, int s, int e)
{ 
    //  Base Case
     if(s>=e)
     {
        return;
     }
    // find index of mid value
    int mid = (s+e)/2;
    

    //  Left part sort krna hai
     mergeSort(arr, s, mid);

    // Right Part sort krna hai
     mergeSort(arr, mid+1,e);

    // Dono part sort hone ke bad dono part ko merge kardena hai
      merge(arr, s,e);
}

int main(){
        int arr[10] = {3,6,2,9,99,3,2,0,12,45} ;   
        int n=10;
        // call MergeSort arra
        mergeSort(arr,0,n-1);

        // print sorted array
        for (int i = 0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    return 0;
}