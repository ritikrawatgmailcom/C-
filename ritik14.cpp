#include<iostream>
using namespace std;
int main(){
int number;
cout<<"enter number"<<endl;
cin>>number;
if(number>0)
{
    cout<<number<<"is a positive number";
}
else if(number<0)
{
    cout<<number << "is a negative number";

}
else 
{
cout<<number<<"is a zero number";
}
return 0;
}