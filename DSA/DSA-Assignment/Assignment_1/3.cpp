// you have given an employee  class with members as described in que-1 and que-2.now
// define a non-member function  which takes an array of employees as an arguments and return employeee object with highest salary

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

Employee getHighestSalary(Employee e[],int size)

int main(){
    

}