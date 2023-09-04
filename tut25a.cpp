// In this tutorial, we will discuss an array of objects and passing objects as a function arguments in C++

// An array of Objects in C++
// An array of objects is declared the same as any other data-type array.  
// An array of objects consists of class objects as its elements.
//  If the array consists of class objects it is called an array of objects. 
//  An example program to demonstrate the concept of an array of objects is shown below.



/*class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};


int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}*/


/*Passing Object as Function Argument
Objects can be passed as function arguments. 
This is useful when we want to assign the values of a passed object to the current object. 
An example program to demonstrate the concept of passing an object as a function argument is shown below.*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}