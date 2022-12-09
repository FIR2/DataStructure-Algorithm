// #include<iostream>
// using namespace std;


// // create function isnertion sort
//   void insertionSort(int arr[],int n)
//   {
//     //  create a loop for round
//      int i,j,temp;// initialy garbaze value store
//      for(i=1; i<n;i++)
//      {
//         temp=arr[i];
//         for(j=i-1;j>=0;j--)
//         {
//             if(arr[j]>temp)
//             {
//                 arr[j+1]=arr[j];
//             }
//             else
//             {// ruk jao
//              break;
//             }
//         }
//         arr[j+1]=temp;
//      }
//   }


// int main(){
//    int arr[6] = {20,49,68,20,3,4};
//     int n=6;
//     //  call insertion sort function
//     insertionSort(arr,n);

//     // print sorted element
//     for(int i=0; i<=n-1;i++)
//      {
//         cout<<arr[i]<<" ";
//      }
//      cout<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// void quickSort(int arr[],int s, int e)
// {
//     // base case
//     if(s>=e)
//     {
//         return;
//     }
//     // partition arra in two part
//     int p = partition(arr,s,e)


//     //  use recursion and sort left and right part
//     quickSort(arr,s,) 


// }   
// int main(){
//     int arr[10]={67,4,7,8,2,6,0,7,46,8};
//     int n=10;
//     // call quick sort function
//     quickSort(arr,0,n-1);

//     // print sorted value
//     for(int i=0;i<=n-1;i++)
//     {
//         cout<<arr[i]<<" ";

//     }cout<<endl;

//     return 0;
// }































// minimum value in BST
node *minVal(node* root){
    node *temp = root;
    while(temp->left != NULL)
    {
        temp=temp->left;
    }
    return temp;
}

// maximum value in BST
node *maxVal(node * root){
    node *temp = root;
    while(temp->right != NULL)
    {
    temp = temp->right
    }
    return temp;
}
