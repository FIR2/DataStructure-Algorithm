#include<iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{  //first of all i take a loop for round
    int i,j,temp;// initialy values are garbaze 
    for(i=1;i<n;i++)
    {
       temp=arr[i];
       for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {//ruk jo
             break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={34,56,21,11,25,43,87,62,18,7};
    int n=10;
    InsertionSort(arr,n);
    // print sorted array
    for(int i = 0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}