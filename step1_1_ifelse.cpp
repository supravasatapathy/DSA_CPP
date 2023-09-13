#include<bits/stdc++.h>
using namespace std;
int main(){
    //write a program that takes an input of age
    // int age;
    // cout<<"enter your age:";
    // cin>>age;
   // cout<<"your age is :"<<age<<endl;
    // and prints if you are adult or not
    // if(age>=18){
    //     cout<<"congrats!! you are an adult";
    // }
    // else{
    //     cout<<"wait baby!! you are not an adult";
    // }
    /*
    A school has following rules for grading system:
    a. Below 25 -F
    b.25 to 44 -E
    c. 45 to 49 -D
    d. 50 to 59 -C
    e. 60 to 79 -B
    f. 80 to 100 -A
    */
//   float grade;
//   cout<<"enter your grade";
//   cin>>grade;
//   if (grade< 25)
//   {
// cout<<"F";
//   }
//   if ( grade<=44)
//   {
//     cout<<"E";
//   }
//  else if (grade<=49)
//   {
//     cout<<"D";
//   }
//  else if ( grade<=59)
//   {
//     cout<<"C";
//   }
//   else if ( grade<=79)
//   {
//     cout<<"B";
//   }
//  else if (grade<=100)
//   {
//     cout<<"A";
//   }
  
//PROBLEM-3
/*
Take the age from the user and then decide accordingly

1.If age<18;
print----->"not eligible for job"

2.if age >=18;

print------->"elegible for job"

3.if age >=55 and age <=57,
print --->"eligible for job but retirment soon."

4.if age>57

print ----->"retirment time"
*/  
  
  int age;
  cout<<"enter your age:";
  cin>>age;
  if (age<18)
  {
    cout<<"not eligible for job";
  }
  else if ( age<=54)
  {
    cout<<"elegible for job";
  }
  else if (age<=57)
  {
    cout<<"eligible for job but retirment soon.";

  }
  else if (age>57)
  {
    cout<<"retirment time";
  }
  
  
  
  
  

   
   
   
    return 0;
}