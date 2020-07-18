/*
 Input : N (i.e. No. of rows)
 Let N = 3
 Output : 1
          12
          123
 Question: The aim is to print above pattern, given N is provided by the user.

*/
#include<iostream>
using namespace std;
int main(){
  int N;
  cout<<" Enter the value of N: "<<endl;
  cin>>N;
  int i=1;
  int j=1;
  while(i<=N){
     while(j<=i){

          cout<<j;
          j++;
     }
     i++;
  }


}
