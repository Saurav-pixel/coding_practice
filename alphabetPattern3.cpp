/*
  Input: N = number of rows (suppose we take n=4)
  output: D
          CD
          BCD
          ABCD
*/
#include<iostream>
using namespace std;

int main(){
 int N;
 cout<<"Enter the number of rows"<<endl;
 cin>>N;
 int ch1 = 'A'+N -1;
 int i = 1;
 while(i<=N){

     int j=1;
     while(j<=i){
          char ch = ch1+j-i;
          cout<<ch;
          j++;
     }
     cout<<endl;
     i = i+1;
 }




}


