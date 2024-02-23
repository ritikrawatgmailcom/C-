#include<iostream>
using namespace std;
int main(){
float basic;
float percentAllow;
float percentDeduct;
float netsalary;
cout<<"enter basic salary"<<endl;
cin>>basic;
cout<<"enter percent of allowances "<<endl;
cin>>percentAllow;
cout<<"enter percent of deductions "<<endl;
cin>>percentDeduct;

netsalary = basic +basic*percentAllow/100-basic*percentDeduct/100;
cout<<"net salary is"<<netsalary<<endl;
return 0;
}