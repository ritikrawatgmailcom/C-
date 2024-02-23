//ARRAY

// #include<iostream>
// using namespace std;
// int main(){
// char A[]={'a','s','d','g','h'};
// for(int i=0;i<5;i++)
// {
//     cout<<A[i]<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={};
// for(int i=0;i<5;i++)
// cout<<A[i]<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[]={2,3,4,5,6,7};
// for(int i=0;i<5;i++)
// cout<<A[i]<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[6]={2,3,4,5,6,7};
// for(int i=0;i<5;i++)
// cout<<A[i]<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[6]={2,3,4,5,6,7};
// for(int x:A)
// cout<<x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// float A[6]={2.3f,3.6f,4,5,6,7};
// for(float x:A)
// cout<<x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[6]={2,3,4,5,6,7};
// for(auto x:A)
// cout<<x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// char A[]={'A',66,'B',68};
// for(auto x:A)
// cout<<x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int A[6]={8,6,3,9,7,4};
//     for(int i=0;i<6;i++)

// cout<<A[i]<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[6]={8,6,3,9,7,4};
// for(int x:A)
// cout<<++x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[6]={8,6,3,9,7,4};
// for(int x:A)
// cout<<--x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
// int A[6]={8,6,3,9,7,4};
// for(int i=0;i<6;i++)
// {
//     sum=sum+A[i];
// }
// cout<<"sum is"<<sum<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0,max;
// int A[8]={21,24,55,44,77,33,99,00};
// max=A[0];
// for(int i=0;i<7;i++)
// {


// if(A[i]>max)
// {
//     max=A[i];

// }
// }

// cout<<"max is"<<max<<endl;


// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={6,11,25,8,15,7,12,20,9,14};
//   int n=10,key;
// cout<<"enter key";
// cin>> key;
// for(int i=0;i<n;i++)
// {
//    if(key==A[i])
//    {
//     cout<<"key is found at"<<i<<endl;
//     return 0;
//    }
// }
// cout<<"key is not found"<<endl;

// return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
// int A[6]={2,4,6,8,9,2};
// int n=6,key;
// cout<<"enter key";
// cin>>key;
// for(int i=1;i<6;i++)
// {
//   if(key==A[i])
//   {
//     cout<<"key is found at"<<i<<endl;
//     return 0;
//   }
// }
// cout<<"key is not found"<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={6,8,13,17,20,22,25,28,30,35};
// int l=0,h=9,key,mid;
// mid=(l+h)/2;
// cout<<"enter key";
// cin>>key;
// while(l<=h)
// {
//   if(key==A[mid])
//   {
//     cout<<"key is found at"<<mid<<endl;
//     return 0;
//   }
//   else if(key<A[mid])
//   {
//     h=mid-1;
//   }else
//   l=mid+1;
// }
// cout<<"key is not found";
// return 0;
// }


//  #include<iostream>
//  using namespace std;
//  int main(){
//  int A[10]={2,4,6,8,12,3,5,7,9,11};
//  int sum=0,n=10;
//  for(int x:A)
//  {
//    sum=sum+x;
//  }
//  cout<<"sum is"<<sum<<endl;
//  return 0;
//  }


// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={2,4,6,8,12,3,5,7,9,11};
// int n=10,max;
// max=A[0];
// for(int i=0;i<10;i++)
// {
//  if(max<A[i]) 
//   {
//     max=A[i];

//   }
// }
// cout<<"max is"<<max;

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={2,4,6,8,12,3,5,7,9,11};
//  int  max=INT_MIN;

// for(auto x:A)
// {
//  if(max<x) 
  
//     max=x;

  
// }
// cout<<"max is"<<max;

// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={2,4,6,8,12,3,5,7,9,11};
// int key;
// cout<<"enter key";
// cin>>key;
// for(int i=0;i<10;i++)
// {
//   if(key==A[i])
//   {
//     cout<<"key is found at"<<i<<endl;
//     return 0;
//   }
// }
// cout<<"key is not found";
 

// return 0;
// }