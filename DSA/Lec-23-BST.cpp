#include<iostream>
using namespace std;

class Node
{

 public:
    //  ak tree mein kya kya cahiye usko define kiya        
    int data;
    node *left;
    node *right;

    // create a constructor for initialy
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};


 node* insertIntoBST(node* root,int data)
 {  //base case jb tree mein koi value hi nahi hai
    if(root == NULL){
      root =new node(d);
      return root;
    }
    
    if(d > root->data){
        //right part mein insertion krna hai
        root->right = insertIntoBST(root->right,d);
    }
    else
    {
        //left part mein insertion krna hai
        root->left = insertIntoBST(root->left,d);
    }
    return root;
 }




// we create a takinput function for tak vale from user
  void takeInput(node* &root)
  {

    int data;// create a variable 

    cin>>data;// take input from user

    while(data != -1)// loop tb Chalo jab tak -1 nahi daloge
     { // jo data mila usko BST mein dalte raho
        root = insertIntoBST(root,data)// BST mein root mein data dalna hai 
          cin>> data;// her baar ak data lete rahenge
     }
  }

 


int main(){
    
//  cerate a NODE
   node *root = NULL; //STARTING MIEN ROOT MEIN KOI VALUE NI HOGI MEANS NULL HOGA

// INPUT LENE KE LIYE FUNCTION CREATE KIYA
    cout<<"Enter data to create BST "<<end;
    takeInput(root);
    return 0;   
}