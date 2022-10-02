// Question 1:-Define a class Employee with private instance member variables empid,name,salary also define instance member functions 
// setEmployee() amd showEmployee()
#include<iostream>
using namespace std;
 
class Employee{
     private:
       int empid;
       char name[20];
       float salary;

     public:
        void setEmployee(int x, char y[], float z)
        {
            empid  =x;
             char *name =y;
            salary =z;
        } 
        int showEmployee()
        {
           cout<<"Employee Id "<<empid<<" "<<"Name "<<name<<" "<<"salary "<<salary;
        } 

};

int main(){
      Employee e;
      e.setEmployee(12,'firoz',1900000);
      e.showEmployee();
    return 0;
}