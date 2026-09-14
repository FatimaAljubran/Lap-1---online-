/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    double bsalary,total_sales,creat,total_salary;
    cout<<"Enter the base salary:";
    cin>>bsalary;
    cout<<"Enter the numer of sales:";
    cin>>total_sales;
    cout<<"Enter the commision rate:";
    cin>>creat;
    total_salary=bsalary+(total_sales*creat);
    cout<<"The total salary is:"<<total_salary;
    
    

    return 0;
}