#include<iostream>
using namespace std;
int main(){
float u,v,a;
float s;
cout<<"enter the value of u,v,a "<<endl;
cin>>u>>v>>a;
s=((v*v)-(u*u))/(2*a);
cout<<"speed is"<<s<<endl;
return 0;
}