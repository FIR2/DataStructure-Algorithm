#include<iostream>
using namespace std;

// create a modified bubblr sort function
 void modified_bubble_sort(int a[], int n)
 {
    int i,r,temp,flag=1;// flag for sorting accour or not
    for(r=1;r<=(n-1);r++)
    {
        for(i=0;i<=n-1-r; i++)
        {
            if(a[i]>a[i+1])
            {
                flag=0;// swaping hoga means swaping nahi  complete huo hai
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        // agar swaping hogya hai 
       if(flag)
         break;
    }
 }

int main(){
    int i;
    int a[]={2,6,3,78,10,45,90,64,57,98,99,40};
    for(i=0;i<=11;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
      modified_bubble_sort(a,12);
    for(i=0;i<=11;i++)
    {
        cout<<a[i]<<" ";
    }
}