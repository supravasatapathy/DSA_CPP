//functions are set of code which performs something for you
//functions are used to modularise code
//functions are used to increase readbility
//functions are used to use same code multiple times
//functions are of two types:1.pass by value and 2. pass by referances
/*
Types of functions:
1.void function----->which does not return anything
2.return function------->
3.parameterised function------>
4.non-parameterised function------>
*/





#include<bits/stdc++.h>
using namespace std;
//void function
void printName(string name ){
    cout<<"hey"<<" "<<name<<endl;
}
int main()
{
    string name;
    cout<<"enter name:";
    cin>>name;
printName(name);

//2nd time


    string name1;
    cout<<"enter name1:";
    cin>>name1;
printName(name1);
}