/*
  input : n= 4
          n indicates no. of rows in the pattern

  output : 4444
           4444
           4444
           4444
  */

  #include<iostream>
  using namespace std;
  int main(){
   int n; // no. of rows
   cout<<"Enter the number of rows"<<endl;
   cin>>n;
   int i =1; //counter initialised for number of columns
   while(i<=n){

     int j=1; //counter initialised for columns in the pattern
     while(j<=n){

          cout<<n;
          j++;
     }
     cout<<endl; // for starting a new row after a row is printed
     i++;
   }
   return 0;
  }
