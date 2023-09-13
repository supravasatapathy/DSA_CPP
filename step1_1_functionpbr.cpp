/*
pass by referances: incase of pass by referances it will take the original value along with the address.
---> in case of pass by referances we use & to send the original value of the function

*/

#include<bits/stdc++.h>
using namespace std;
void doSomething(string &s){
    s[0]='t';
    cout<<s<<endl;
}
int main(){
//pass by referances
string s="raj";
doSomething(s);
cout<<s<<endl;
    return 0;
}