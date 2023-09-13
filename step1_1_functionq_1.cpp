#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
    int add=a+b;
    return add;
}
int main()
{
   int a,b;
   cout<<"enter the value of a and b :"<<endl;
   cin>>a>>b;
   int result=sum(a,b);
   cout<<"the sum of two numbers are:"<<result<<endl;
}