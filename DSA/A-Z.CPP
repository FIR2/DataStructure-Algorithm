#include<iostream>
using namespace std;

class arrayADT{

   private:
       int lastIndex;
       int capacity;
       int *ptr;

   public:
        void createArray(int cap);  
        void insertArray(int index, int data); 
        void appendArray(int data); 
        void deleteArray(int index);
        void editArray(int index, int data);
        int  searchArray(int data);
        int countArray();
        ~arrayADT(){
            delete [] ptr;
        }

};




int arrayADT::countArray(){

    return lastIndex + 1;
}


int arrayADT::searchArray(int data){
 
     for(int i = 0; i <= lastIndex; i++){
 
            if(ptr[i] == data){
                return i;
            }

            return -1;
     }
}




void arrayADT::editArray(int index, int data){

    if( index < 0 || index >lastIndex){
  
           cout<<" Oprtation Failed : Invalid Index "<<endl;

    }
    else
    {
        ptr[index] = data;
    }
}




void arrayADT::deleteArray(int index){

    if(index < 0 || index > lastIndex){
        cout<<" Operation Failed : Invalid index or empty array "<<endl;
    }
    else
    {
        for(int i = index; i<=lastIndex ;i++){

            ptr[i] = ptr[i+1];
            lastIndex--;
        }
    }
}





void arrayADT::appendArray(int data){
 
     if(lastIndex + 1 == capacity){
         
         cout<<" Operation Failed : Array Overflow"<<endl;
     }
     else
     {
        ptr[lastIndex] = data;
        lastIndex++;
     }
}



void arrayADT::insertArray(int index, int data){
    if(index <0 || index > lastIndex + 1){

        cout<<" Operation Failed : Invalid Index "<<endl;
    }
    else if(lastIndex + 1 == capacity){
         
        cout<<" Operation Failed : Array Overflow "<< endl;
    }
    else{
        for(int i = lastIndex; i>=index; i--){
            ptr[i+1] = ptr[1];
            ptr[index] =  data;
            lastIndex++;

        }
    }
}



    
void arrayADT::createArray(int cap){

    ptr = new int[cap];
    capacity = cap; 
    lastIndex = -1;
}


int main(){
    
    return 0;
}