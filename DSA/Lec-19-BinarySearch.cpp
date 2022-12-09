#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int startIndex = 0;
    int endIndex = size-1;

    int midIndex =(startIndex+endIndex)/2;
    // search jab tak chalega jab tak start chota or equal rahega end index se
    while(startIndex <= endIndex)
    {
      if(arr[midIndex] == key)// yadi jo value search kr rahe hain wo milgyi to
        {
            return midIndex;//to hame wah index dedo jahan pr key value hai
        }
        // Go to rigth wala part
        // agar key value midIndex value se badi hai to mid index ke rigth mein search karo
        if(key > arr[midIndex])
        {
            startIndex = midIndex + 1;
        }
        else// Go to left wala part
        {
            endIndex = midIndex - 1;
        }

        midIndex = (startIndex + endIndex)/2;
    }
    // agar jis value lo search kr rahe hain wo ni mili to return krdo -1
    return -1;
}

int main(){
     int even[6]={3,6,8,9,10,20};//sorted array
     int odd[5]={7,12,45,56,100} ;//sorted array
    
     int evenIndex = binarySearch(even,6,20);
     cout<<"The index of 20 is "<<evenIndex<<endl;

     int oddIndex = binarySearch(odd,6,100);
     cout<<"The index of 100 is "<<oddIndex;
      
    return 0;
}