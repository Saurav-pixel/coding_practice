/*
  Input: N = number of rows (suppose we take n=4)
  output: A
          BB
          CCC
          DDDD
*/
#include<iostream>
using namespace std;

int main(){

int N;
cout<<"Enter the number of rows "<<endl;
cin>>N;
int i=1;
while (i<=N){

     int p=i;
     int j=1;
     while(j<=i){

          char ch = 'A'+p-1;
          cout<<ch;
          j++;
        }
     cout<<endl;
     i=i+1;
  }



}
