#include<iostream>
using namespace std;

  void bubble_sort(int a[], int n)
  {
    int i,r,temp;
    // loop for total number or rounds(r)
    for(r=1;r<=n-1;r++)
    {
      // loop for round inside the each rounds
      for(i=0;i<=n-r-1;i++)
      {
        if(a[i]>a[i+1])
        {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
        }
      }
    }
  }

  int main()
  { //take array
    int a[]={34,65,81,25,81,37,90,44,17};
    //take array end

    //print array as to as
    int i;
    for(i=0;i<=8;i++)
    {
      cout<<a[i]<<" ";
    }
    //print array section end

    cout<<endl;
    // sort array throe bubble sort function
    bubble_sort(a,9);

  //  print sorted array
    for(i=0;i<=8;i++)
    {
      cout<<a[i]<<" ";
    }

  }
