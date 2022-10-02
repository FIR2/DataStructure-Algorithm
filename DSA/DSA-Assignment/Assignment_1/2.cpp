// In Employee class(que-1),define setter and getters
#include<iostream>
using namespace std;

class Employee{
   private:
      int empid;
      char name[20];
      float salary;
   public:
       void setEmpid(int x){empid = x;}
       void setName(char n[]){strcpy(name,n);}
       void setSalary(float s){salary =s;}
       int getEmpid(){return empid;}
       char* getName(){return name;}
       float getSalary(){return salary;}
};

int main(){
    
    Employee e;
    e.setEmpid(102);
    e.setName("firoz");
    e.setSalary(1200000.33332);
    e.getEmpid();
    e.getName();
    e.getSalary();
    return 0;
}