/*
 Input: N = no. of rows( = 4)
 Output: 1
         21
         321
         4321
*/
#include<iostream>
using namespace std;
 int main(){
  int N;
  cout<<"Enter the number of rows "<<endl;
  cin>> N;
  int i=1;
  while(i<=N){
     int k =i;
     int j=1;
     while(j<=i){

          cout<<k;
          k--;
          j++;
     }
     cout<<endl;
     i++;
  }

}
