#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;



class BST
{
   private:
     struct node
     {
       node *left;
       int item;
       node *right;
     };
     node *root;

   protected:
     void inorderT(node *ptr);
   public:
     BST(){root=NULL;}
     void insert(int data);//insert a data into Binary Search Tree;
     void inorder();
     void preorder();
     void postorder();
};
/*-----------------------******--START INSERTION ---------*****---------------*/
void BST::insert(int data)
{
  // create a node
   node *n = new node;
   n->left=NULL;
   n->item=data;
   n->right=NULL;

   node *ptr;

   // exceotional case
   if(root==NULL)
     root=n;
   else
   {
      ptr=root;
     /*-------------Start while loop----------------*/
     while(true)
     {
       if(ptr->item == data)
        {
         //Dublicate data
         delete n;
          break;
        }
       else if(data < ptr->item)
        {
        // insert data in Left subtree
          if(ptr->left == NULL)//CHECK KARLENGE KI YADI PTR LEFT NULL TO NI HAI AGAR H TO DATA KO INSERT KRDENGE
            {
              ptr->left=n;// data ko ptr left m rakh diya
               break;//agar data insert ho gyi hai to break krdo
            }
           else
            {
              ptr=ptr->left; //jb ptr ka left null ni hai tb
            }
        }
       else
        {
          // insert data in rigth subtree
          if(ptr->right == NULL)
            {
              ptr->right=n;
               break; //agar data insert ho gyi to loop ko break krdo
            }
          else
              ptr=ptr->right;
         }
      }
    /*-----------End of While Loop--------> */
    }
    /*----------------End if Else condition---------------*/
}
/*-------**********-----------END INSERTION-----**********-----------*/



/*------------------START INORDER-TRAVERSING AND THEN PRINTING -----------------------*/
void BST::inorderT(node *ptr)
{
  if(ptr)
   {
    inorderT(ptr->left);
    cout<<" "<<ptr->item;
    inorderT(ptr->right);
   }
}

void BST::inorder()
{
  inorderT(root);
}
/*------------------END INORDER-TRAVERSING AND THEN PRINTING -----------------------*/
  

 
int main(){
  BST tree;
cout<<"Enter value in BST "<<endl;
  tree.insert(50);
  tree.insert(70);
  tree.insert(30);
  tree.insert(60);
  tree.insert(65);
  tree.insert(90);

  tree.inorder();
  
  getch();

}
