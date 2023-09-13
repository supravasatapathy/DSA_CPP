#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    long y=15;
    
    float z=5.6;
    float k=5;
    cout<<"value of x and y is :"<<x<<" "<<y<<endl;
    //string
    // string s;
    // cout<<"enter the value of string:";
    // cin>>s;
    // cout<<s;
//getline
string str;
cout<<"enter the str: "<<endl;
getline(cin,str);
cout<<str;

  //char

  char ch;
    cout<<"enter the ch:";
    cin>>ch;
    cout<<"the char is "<<ch;
return 0;
}
//NOTE

/*
always use #include<bits/stdc++.h> as it includes all the libraraies.
 
 DATATYPE

 int ----> size: 4bytes -------> -2,147,483,648 to 2,147,483,647
 unsigned short---->size: 2byte ------->0 to 65,535
 long------>size:4bytes ---------> -2,147,483,648 to  2,147,483,647
 unsigned long------->size:4bytes---------->0 to 4,294,967,295
 long long ---------> size: 8bytes --------> -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
 float---------->4byte---------->1.2E-38 to 3.4E+38
 double-------->8byte----------->2.3E-308 to 1.7E+308
 long double-------->10byte------->3.4E--4932 to 1.1E+4932
 
*/