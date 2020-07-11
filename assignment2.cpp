// Coding Ninja Loop problem
//Question: Given a number N, print sum of all even numbers from 1 to N

#include<iostream>
using namespace std;
int main()
{

     int num;
     int sum = 0;
     cout<< "Enter any number:"<<endl;
     cin>> num;
     int i=1;
     while(i<=num){

          if(i%2==0){
               sum =sum+i;
          }
          i = i+1;
     }

     cout<<"The sum is :" << sum ;

     /* Coding Ninja Solution


       int num;
     int sum = 0;
     cout<< "Enter any number:"<<endl;
     cin>> num;
     int i=1;
     while(i<=num){

          if(i%2==0){
               sum =sum+i;
          }
          i = i+1;
     }

     cout<<"The sum is :" << sum ;








     */
}
