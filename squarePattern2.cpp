/*
 input :  int n = no. of rows (suppose we took n=4)
 output : 1234
          1234
          1234
          1234
*/

#include<iostream>
using namespace std;

int main(){
 int n;
 cout<< "Enter the number of rows" <<endl;
 cin>> n;

 int i =1;
 while(i<=n){

     int j=1;
     while(j<=n){

          cout<< j ;
          j++;
     }
     cout<<endl;
     i++;

 }



}
