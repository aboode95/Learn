// Modified program using structures
#include <stdio.h>
#include <iostream>

using namespace std;

void passByReference(int* x); // pointer
void passByReferenceD(int** x); // double pointer


int main()

{
    int betty = 13;
    
    // TEST 1
    cout<<"TEST 1"<<endl;
    cout<< &betty <<endl; // address of "betty"
    cout<< betty <<endl; // value
    passByReference(&betty); // address of "betty" sent
    
    
    // TEST 2
        cout<<"TEST 2"<<endl;
    int* sandy = &betty; // address of "betty" stored in INT-POINTER variable named "sandy"
    cout<< &sandy <<endl; // address of "sandy"
    cout<< sandy <<endl; // "sandy" = address of "betty"
    passByReferenceD(&sandy); // DOUBLE POINTER. Address of "sandy" = Address of (address of betty)
}

void passByReference(int* x) // address is being received. To store it, we make a INT-POINTER variable  named "x". The address is stored in "x"
                             // we can't store an address in a normal int variable

{
    cout<< x <<endl; // address printed
    *x = 55;
    cout<< *x <<endl; // pointing to whats stored in address "x"
}

void passByReferenceD(int** x) // address of (address of "betty") is being received. To store it, we make a INT-DOUBLE-POINTER variable  named "x"
{
    cout<< x <<endl; // address of (address of "betty")
    cout<< *x <<endl; // pointing to whats stored in address "x". remember "x" = address of "sandy". SO it will print what is stored in "sandy" which is = address of "betty"
    **x = 68;
    cout<< **x <<endl; // pointing to whats stored in the ADDRESS stored in address "x"
}


