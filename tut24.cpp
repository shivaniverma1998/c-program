#include<iostream>
using namespace std;

class Employee{
    int id;
    int count;
    public:
        void setData(void){
            cout<<"enter the id"<<endl;
            cin>>id;
    
        }
        void  getData(void){
            cout<<"the id of this employeee is"<<id<<endl;
        }
};

int main(){

    Employee shivani , dinki , dinki1;
    shivani.setData();
    shivani.getData();

    dinki.setData();
    dinki.getData();

    dinki1.setData();
    dinki1.getData();


    //shivani.id=1;
    //shivani.count=1;   //cat do this as id and count are private
    return 0;
}

// but above case there is no method i can preserve the employee count

//har object ka apna ek count
//static variable banega class k bahar
// class{} 
//int Employee:: count;

