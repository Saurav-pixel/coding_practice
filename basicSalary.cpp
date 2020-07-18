#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int basic,allow;
    double da,pf,hra,totalSalary;
    char grade;
    cin>>basic>> grade;
    hra = 0.2*basic;
    da = 0.5*basic;
    pf = 0.11*basic;

    if(basic >=0 && basic<=7500000){


        if(grade>='A' && grade<='Z'){

          if(grade == 'A'){

            allow = 1700;
            totalSalary = basic + hra+ da + allow -pf;
            cout<< round (totalSalary);

        }

            else if(grade == 'B'){

            allow = 1500;
            totalSalary = basic + hra+ da + allow -pf;
            cout<< round(totalSalary) ;
        }


            else{

            allow = 1300;
            totalSalary= basic + hra+ da + allow -pf;
            cout<<round (totalSalary);
        }

    }

  }

}

