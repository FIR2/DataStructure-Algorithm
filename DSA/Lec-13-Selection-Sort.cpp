#include<iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<=n-1;i++)
    {
      for(j=i+1;j<=n;j++)
      {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
      }   
    }
}

int main(){
    int i;
    int a[] = {41,55,32,70,11};
    for(i=0;i<=4;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    selection_sort(a,5);
     for(i=0;i<=4;i++)
    {
        cout<<a[i]<<" ";
    }

}