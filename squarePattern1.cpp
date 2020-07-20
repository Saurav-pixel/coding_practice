 /*
 Input : n = no. of rows (suppose n =4)
 output : 1111
          2222
          3333
          4444
 */

#include <iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter the number of rows:"<<endl;
 cin>>n;
 int i=1 ; // counter initialised for the number of rows
 while(i<=n){
     int j=1; // counter initialised for the number of columns
     while(j<=n){
          cout<<i;
          j++;
     }
     cout<<endl;
     i++;
 }

}

 */

#include <iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter the number of rows:"<<endl;
 cin>>n;
 int i=1 ; // counter initialised for the number of rows
 while(i<=n){
     int j=1; // counter initialised for the number of columns
     while(j<=n){
          cout<<i;
          j++;
     }
     cout<<endl;
     i++;
 }

}

