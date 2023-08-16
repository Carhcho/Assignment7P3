// Assignment7.cpp : Cesar Roncancio 12/12/2021.
//

#include <iostream>
#include "IntBinaryTree.h"
#include "Date.h"
#include "Person.h"
#include "EmployeeInfo.h"
using namespace std;

int main()
{
    IntBinaryTree tree;
    Date StandardHireDate(1, 12, 2020);
    EmployeeInfo Cesar("Cesar", "1773 trafalga", "salt lake", "utah", "3853477634", 100, StandardHireDate);
    EmployeeInfo Emily("Emily", "1773 trafalga", "salt lake", "utah", "3855869234", 200, StandardHireDate);
    EmployeeInfo Daron("Daron", "1773 trafalga", "salt lake", "utah", "3852365154", 300, StandardHireDate);
    EmployeeInfo Supa("Supa", "1773 trafalga", "salt lake", "utah", "3858956237", 400, StandardHireDate);
    EmployeeInfo Jack("Jack", "1773 trafalga", "salt lake", "utah", "3858952416", 500, StandardHireDate);
    EmployeeInfo Julio("Julio", "35a 09", "bogota", "colombia", "3108652019", 600, StandardHireDate);
    EmployeeInfo Tina("Tina", "35 a 09", "bogota", "colombia", "3108654251", 700, StandardHireDate);
    EmployeeInfo Macy("Macy", "8084 sunset", "columbia", "missouri", "4562389811", 800, StandardHireDate);
    EmployeeInfo Splinter("Splinter", "85 cell", "tampa", "florida", "8956231478", 900, StandardHireDate);
    EmployeeInfo Lavonda("Lavonda", "1 sharon dr", "tampa", "florida", "8954213611", 1000, StandardHireDate);

    cout << "inserting nodes" << endl;
    tree.insertNode(Julio.getId());
    tree.insertNode(Tina.getId());
    tree.insertNode(Lavonda.getId());
    tree.insertNode(Cesar.getId());
    tree.insertNode(Emily.getId());
    tree.insertNode(Daron.getId());
    tree.insertNode(Supa.getId());
    tree.insertNode(Jack.getId());
    tree.insertNode(Macy.getId());
    tree.insertNode(Splinter.getId());


    cout << "InOrder traversal" << endl;
    tree.displayInOrder();

    cout << "PreOrder traversal" << endl;
    tree.displayPreOrder();

    cout << "PostOrder traversal" << endl;
    tree.displayPostOrder();



    //search for an specific employee id
    int empId = 0;
    cout << "Please enter the id number of the employee you are looking for" << endl;
    cin >> empId;
    if (tree.searchNode(empId)) {
        cout << empId << " was found in the tree.\n";
        if (empId == Cesar.getId()) {
            cout << Cesar.getName() << endl;
            cout << Cesar.getAddress() << endl;
            cout << Cesar.getCity() << endl;
            cout << Cesar.getState() << endl;
            cout << Cesar.getPhone() << endl;
            cout << Cesar.getId() << endl;
            Cesar.getHireDate();
        }
        if (empId == Emily.getId()) {
            cout << Emily.getName() << endl;
            cout << Emily.getAddress() << endl;
            cout << Emily.getCity() << endl;
            cout << Emily.getState() << endl;
            cout << Emily.getPhone() << endl;
            cout << Emily.getId() << endl;
            Emily.getHireDate();
        }
        if (empId == Daron.getId()) {
            cout << Daron.getName() << endl;
            cout << Daron.getAddress() << endl;
            cout << Daron.getCity() << endl;
            cout << Daron.getState() << endl;
            cout << Daron.getPhone() << endl;
            cout << Daron.getId() << endl;
            Daron.getHireDate();
        }
        if (empId == Supa.getId()) {
            cout << Supa.getName() << endl;
            cout << Supa.getAddress() << endl;
            cout << Supa.getCity() << endl;
            cout << Supa.getState() << endl;
            cout << Supa.getPhone() << endl;
            cout << Supa.getId() << endl;
            Supa.getHireDate();
        }
        if (empId == Jack.getId()) {
            cout << Jack.getName() << endl;
            cout << Jack.getAddress() << endl;
            cout << Jack.getCity() << endl;
            cout << Jack.getState() << endl;
            cout << Jack.getPhone() << endl;
            cout << Jack.getId() << endl;
            Jack.getHireDate();
        }
        if (empId == Julio.getId()) {
            cout << Julio.getName() << endl;
            cout << Julio.getAddress() << endl;
            cout << Julio.getCity() << endl;
            cout << Julio.getState() << endl;
            cout << Julio.getPhone() << endl;
            cout << Julio.getId() << endl;
            Julio.getHireDate();
        }
        if (empId == Tina.getId()) {
            cout << Tina.getName() << endl;
            cout << Tina.getAddress() << endl;
            cout << Tina.getCity() << endl;
            cout << Tina.getState() << endl;
            cout << Tina.getPhone() << endl;
            cout << Tina.getId() << endl;
            Tina.getHireDate();
        }
        if (empId == Macy.getId()) {
            cout << Macy.getName() << endl;
            cout << Macy.getAddress() << endl;
            cout << Macy.getCity() << endl;
            cout << Macy.getState() << endl;
            cout << Macy.getPhone() << endl;
            cout << Macy.getId() << endl;
            Macy.getHireDate();
        }
        if (empId == Splinter.getId()) {
            cout << Splinter.getName() << endl;
            cout << Splinter.getAddress() << endl;
            cout << Splinter.getCity() << endl;
            cout << Splinter.getState() << endl;
            cout << Splinter.getPhone() << endl;
            cout << Splinter.getId() << endl;
            Splinter.getHireDate();
        }
        if (empId == Lavonda.getId()) {
            cout << Lavonda.getName() << endl;
            cout << Lavonda.getAddress() << endl;
            cout << Lavonda.getCity() << endl;
            cout << Lavonda.getState() << endl;
            cout << Lavonda.getPhone() << endl;
            cout << Lavonda.getId() << endl;
            Lavonda.getHireDate();
        }
    }       
    else
        cout << empId << " was not found in the tree. \n";
}


