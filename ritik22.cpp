// #include<iostream>
// using namespace std;
// int main(){
// int a=10;
// int *p=&a;
// cout<<a<<endl;
// cout<<&a<<endl;
// cout<<p<<endl;
// cout<<&p<<endl;
// cout<<*p<<endl;

// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int *p=new int[5];
// p[0]=12;
// p[1]=13;
// cout<<p[1]<<endl;
// delete []p;
// p=nullptr;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int size;
// cout<<"enter size of elements";
// cin>>size;
// long double A[size];
// cout<<sizeof A<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int size;
// cout<<"enter size of elements";
// cin>>size;
// int *p=new int[size];
// cout<<"enter new size";
// cin>>size;
//  p= new int[size];
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={2,4,6,8,10};
// int *p=A;
// cout<<*p<<endl;
// p++;
// cout<<*p<<endl;
// p--;
// cout<<*p<<endl;
// p=p+2;
// cout<<*p<<endl;
// p=p-2;
// cout<<*p<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={2,4,6,8,10};
// int *p=A;
// cout<<p<<endl;
// for(int i=0;i<5;i++)
// {
//     cout<<*p<<endl;
//     p++;
// }
// cout<<p<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
 
// int A[5]={2,4,6,8,10};
// int *p=A, *q=&A[4];
// cout<<p-q;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
 
// int A[5]={2,4,6,8,10};
// int *p=A, *q=&A[4];
// cout<<q-p;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int x=10;
// int &y=x;
// int b=20;
// int &y=b;
// cout<<x<<endl;
// y++;
// x++;
// cout<<y<<endl;
// cout<<&x<<" \n"<<&y  <<"\n ";
// return 0;
// }

// #include<iostream>
// using namespace std;
// int max(int x=10,int y=5)
// {
//     return x>y;
// }
// int min(int x,int y)
// {
//     return x<y;

// }
// int main(){
// int (*fp)(int,int);
// fp=max;
// (*fp)(10,5);
// fp=min;
// (*fp)(10,5);
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int x=20;
// int *p;
// p=&x;
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={2,4,6,8,10};
// int *p=A;
// for(int i=0;i<5;i++)
// {
//     cout<<p[i]<<endl;
//     cout<<&p[i]<<endl;
   
// }
// return 0;
// }

//  #include<iostream>
//  using namespace std;
//  int main(){
//  int a[10][10],b[10][10],mult[10][10],r,c,i,j,k;
//  cout<<"enetr no. of raws of matrix:"<<endl;
//  cin>>r;
//  cout<<"enter no. of co,umns of matrix:"<<endl;
//  cin>>c;
//  cout<<"enter elements of first  matrix:\n";
//  for(i=0;i<r;i++)
//  {
//     for(j=0;j<c;j++)
//     {
//         cin>>a[i][j];
//     }
//  }
//  cout<<endl;
//  cout<<"enter elements of second  matrix:\n";
//  for(i=0;i<r;i++)
//  {
//     for(j=0;j<c;j++)
//     {
//         cin>>b[i][j];
//     }
//  }
//  cout<<endl;
//  cout<<"multiplication of matrix is:\n";
//  for(i=0;i<r;i++)
//  {
//     for(j=0;j<c;j++)
//     {
//         mult[i][j]=0;
//         for(k=0;k<c;k++)
//         {
//             mult[i][j]+=a[i][k]*b[k][j];
//         }
//     }
//  }
//  for(i=0;i<r;i++)
//  {
//     for(j=0;j<c;j++)
//     {
//         cout<<mult[i][j]<<" "<<endl;
//     }
//  }

//  return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){
// int x=10;
// int *p;
// p=&x;
// cout<<p<<endl;
// cout<<x<<endl;
// cout<<&x<<endl;
// cout<<&p<<endl;
// cout<<*p<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int a=13;
// int *p;
// p=&a;
// cout<<a<<endl;
// cout<<&a<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<&p<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int A[5]={2,4,6,8,9};
//     int *p;
//     p=new int[5];
//     p[0]=2;
//     //p[1]=4;
//     cout<<p[1]<<endl;
//     delete []p;
//     p=nullptr;
    

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int size;
// cout<<"enter size";
// cin>>size;

// int *p=new int [size];
// cout<<"enter newm size"<<endl;
// cin>>size;
// //p=new int[size];

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int size;
// cout<<"enter size "<<endl;
// cin>>size;
// int *p=new int [size];
// delete[]p;

// cout<<"enter new size";
// cin>>size;
// p=new int[size];
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={2,4,6,8,10};
// int *p=A;
// cout<<*p<<endl;
// p++;
// cout<<*p<<endl;
// p--;
// cout<<*p<<endl;
// p=p+2;
// cout<<*p<<endl;
// p=p-2;
// cout<<*p<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={2,4,6,8,9};
// int *p=A;
// cout<<p<<endl;
// for(int i=0;i<5;i++)
// {
//     cout<<*p<<endl;
//     p++;
// }
// cout<<p<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={2,3,4,5,6};
// int *p=A,*q=&A[3];
// cout<<q-p;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int x=10;
// int &y=x;
// cout<<x<<endl;
// cout<<y<<endl;
// x++;
// y++;
// cout<<x<<endl;
// cout<<y<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int x=10;
// int &y=x;
// cout<<x<<endl;
// cout<<y<<endl;
// x++;
// y++;
// cout<<&x<<" \n"<<&y<<" \n"<<endl;

// return 0;
// }

// #include<iostream>
// using namespace std;
// void display()
// {
//     cout<<"Hello"<<endl;

// }
// int main(){
//     display();

// return 0;
// }

// #include<iostream>
// using namespace std;
// void display()
// {
//     cout<<"Hello"<<endl;

// }
// int main(){
//     void(*fp)();
//     fp=display;
//     (*fp)();
// return 0;
// }