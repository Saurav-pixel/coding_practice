#include<iostream>
using namespace std;

int main() {
 	int x; // x---> is representing the base number
    int n ; // n--> is representing  the exponent
    int pow =1;
  cin>>x<<" ">>n;

    int i=1;
    while(i<=n){

        pow = pow*x;
        i++;
    }
    cout<<pow;
}
