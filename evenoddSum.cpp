#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N;
    cin>>N;
    int evenSum = 0;
    int oddSum = 0;
    while(N >=0){
        int NN;
        NN = N%10;
        if (NN % 2 == 0){

            evenSum = evenSum+NN;
           // N = N/10;
        }
        else {

            oddSum = oddSum+NN;
          //  N = N/10;
        }

        N = N/10;
    }
    cout<< evenSum<<" "<<oddSum;
    return 0;

}
