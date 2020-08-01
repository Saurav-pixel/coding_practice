#include<iostream>
using namespace std;

int main(){
  int decimalNumber;
  long placeValue = 1;
  long binaryNumber = 0;
  cout<<"Enter any decimal number "<<endl;
  cin>>decimalNumber;
  while(decimalNumber != 0){
     int remainder = decimalNumber % 2;
     binaryNumber = binaryNumber + placeValue * remainder;
     placeValue = placeValue * 10 ;
     decimalNumber = decimalNumber / 2;
  }
  cout<<binaryNumber;
}

