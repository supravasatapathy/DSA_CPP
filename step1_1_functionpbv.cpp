//function pass by referances and pass by value.
/*
pass by value:
incase of pass by value it takes a copy of the original function and do the operation but did not change the original function.

*/



#include<bits/stdc++.h>
using namespace std;
void doSomething(int n){
    cout<<n<<endl;
    n += 5;
    cout<<n<<endl;
    n +=5;
    cout<<n<<endl;
}
int main()
{
//pass by value
int n=10;
doSomething(n);
cout<<n<<endl;
return 0;

}