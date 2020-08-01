/*
 Problem : Covert the given binary number into its decimal equivalent number
 Input : A binary number(if N = 1011)
 Output : Decimal equivalent of the binary input (answer = 11)

*/
#include<iostream>
using namespace std;

int main(){
     int binaryNum; // this will store the binary number
     int placeVal = 1; // the variable will be storing place value of binary digits
     int decimalNum = 0;
     cout<<"Enter the binary number "<<endl;
     cin>>binaryNum;
     while(binaryNum != 0){
          int r = binaryNum % 10; // it will store the remainder
          decimalNum = decimalNum + placeVal * r;
          binaryNum = binaryNum/10;
          placeVal = placeVal * 2;
     }
     cout<<decimalNum;
     return 0;

}
