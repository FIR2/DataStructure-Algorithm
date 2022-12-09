#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;


class BST{
   private:
     struct node{
        node *left;
        int item;
        node *right;
     };
     node *root;
   protected:
     void postorderT(node *ptr);  
   public:
     BST(){root == NULL;}
     void insert(int data);
     void postorder();

};

/*-------------START INSERTION --------------*/
 void BST::insert(int data)
 {
    node *n = new node;
    n->left = NULL;
    n->item = data;
    n->right = NULL;

    node *ptr;
   if(root == NULL)
       root=n;
   else   
      {
        ptr = root;
        while(true)
        {
            if(ptr->item == data)
            {
                //dublicate value
                delete n;
                break;
            }
            else if(data < ptr->item)
            {
               //insert left side
               if(ptr->left == NULL)
                 {
                    ptr->left=n;
                    break;
                 }  
                else
                 {    
                    ptr=ptr->left;
                 }
            }       
            else
            {
            //    insert right side
               if(ptr->right == NULL )
                {
                   ptr->right=n;
                   break;
                }
               else
                {
                   ptr=ptr->right;
                }
                   
            }
        }

     }
}
/*-------------END INSERTION --------------*/


void BST::postorderT(node *ptr)
{
    if(ptr)
    {
        postorderT(ptr->left);
        postorderT(ptr->right);
        cout<<" "<<ptr->item;
    }
}

void BST::postorder()
{
    postorderT(root);
}




int main(){
    BST tree;
    tree.insert(30);
    tree.insert(50);
    tree.insert(70);
    tree.insert(60);
    tree.insert(90);
    tree.insert(65);
    

    tree.postorder();
    getch();

}