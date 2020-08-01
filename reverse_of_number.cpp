/*
     Aim is to find the reverse of a number
    Input : An integer N (for example N =8120)
    Output : reverse of the input integer (answer = 218 ::0 is excluded in printing the answer)

*/
#include<iostream>
using namespace std;

int main(){
 int n ;
 int rev = 0;
 cout<<"Enter the number"<<endl;
 cin>> n;
 while(n != 0){
     int nn = n%10;
     rev = rev*10 + nn;
     n = n/10;
  }
  cout<<rev;

  return 0;
}
