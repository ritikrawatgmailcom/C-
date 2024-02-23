// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<5;i++)
// {
//     cout<<"*";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<5;i++)
// {
//    for(int j=0;j<=5;j++)
//    {
//     cout<<j<<" ";
//    }
//     cout<<endl;
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// for(int i=1;i<5;i++)
// {
//    for(int j=1;j<5;j++)
//    {
//     cout<<"("<<i<<","<<j<<")";
//    }
//    cout<<endl;
// }
 
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int count=1;
// for(int i=0;i<4;i++)
// {
//    for(int j=0;j<4;j++)
//    {
//     cout<<count<<" ";
//      count++;
//    }
//    cout<<endl;
// }
 
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//    int raw;
//    cout<<"enter raw";
//    cin>>raw;
// for(int i=0;i<=raw;i++)
// {
//    for(int j=0;j<=i;j++)
//    {
//    cout<<"* ";
//    }
//    cout<<endl;
// }
 
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
   
// for(int i=0;i<4;i++)
// {
//    for(int j=0;j<4;j++)
//    {
//     if(i>=j)
//    cout<<"* ";
//    }
//    cout<<endl;
// }
 
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<4;i++)
// {
//    for(int j=0;j<4;j++)
//    {
//     if(i<=j)
//     {
//    cout<<"*";
//     }else
//         cout<<" ";
//    }
//    cout<<endl;
// }
 
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<4;i++)
// {
//    for(int j=0;j<4;j++)
//    {
//     if(i+j>=3)
//     {
//    cout<<"*";
//     }else
//         cout<<" ";
//    }
//    cout<<endl;
// }
 
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<4;i++)
// {
//     for(int j=0;j<4;j++)
//     {
//     if(i+j>=3)
    
//     cout<<"*";
//     else
//     cout<<" ";
//     if(i>=j)
//     cout<<"* ";
//     else
//     cout<<" ";
// }
// cout<<endl;
// }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<=5;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[2][3]={{2,5,9},{6,9,15}};
// int B[2][3]={{2,5,9},{6,9,15}};
// int C[2][3];

// for(int i=0;i<2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//       C[i][j]=A[i][j]+B[i][j];   
//      }
// }
// for(int i=0;i<2;i++)
// {
//     for(int j=0;j<3;j++)
// {
//   cout<<C[i][j];
// }
//     cout<<endl;
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int A[2][3]={{2,5,9},{6,9,15}};
// int B[2][3]={{3,4,5},{6,7,8}};
// int C[2][3];

// for(int i=0;i<2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//       C[i][j]=A[i][j]+B[i][j];   
//      //}
// //}
// //for(int i=0;i<2;i++)
// //{
//   // for(int j=0;j<3;j++)
// //{
//   cout<<C[i][j]<<" ";
// }

//     cout<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[2][3]={2,5,9,6,9,15};
// int B[2][3]={3,4,5,6,7,8};
// int C[2][3];

// for(int i=0;i<2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//       C[i][j]=A[i][j]+B[i][j];   
//      //}
// //}
// //for(int i=0;i<2;i++)
// //{
//   // for(int j=0;j<3;j++)
// //{
//   cout<<C[i][j]<<" ";
// }

//     cout<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[2][3];
// for(auto& x:A)
// {
//     for(auto& y:x)
//     {
//         cin>>y;

//     }
//     cout<<endl;
// }
// for(auto& x:A)
// {
//     for(auto& y:x)
//     {
//         cout<<y<<" ";

//     }
//     cout<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0,average;
// int A[6]={2,3,4,5,6,7};

// for(int i=0;i<6;i++)
// {
//     sum=sum+A[i];
    
// }
// average=sum/6;
// cout<<"average is"<<average;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n,i;
// float num[100],sum=0,average;
// cout<<"enter the number of element";
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     cout<<i+1<<"enter number";
//     cin>>num[i];
//     sum+=num[i];

// }
// average=sum/n;
// cout<<"average ="<<average;
// return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//  int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
 
//  cout << "Enter rows and columns for first matrix: ";
//  cin >> r1 >> c1;
//  cout << "Enter rows and columns for second matrix: ";
//  cin >> r2 >> c2;
 
//  if (c1!=r2)
//  {
//  cout<<"Cant be Multiplied"; 
//  return 0; 
// } 
//  cout << endl << "Enter elements of matrix 1:" << endl;
//  for(i = 0; i < r1; ++i)
//  for(j = 0; j < c1; ++j)
//  {
//  cout << "Enter element a" << i + 1 << j + 1 << " : ";
//  cin >> a[i][j];
//  }
//  cout << endl << "Enter elements of matrix 2:" << endl;
//  for(i = 0; i < r2; ++i)
//  for(j = 0; j < c2; ++j)
//  {
//  cout << "Enter element b" << i + 1 << j + 1 << " : ";
//  cin >> b[i][j];
//  }
//  for(i = 0; i < r1; ++i)
//  for(j = 0; j < c2; ++j) 
//  { 
//  mult[i][j]=0;
//  for(k = 0; k < c1; ++k)
//  {
//  mult[i][j] += a[i][k] * b[k][j];
//  } 
//  }
//  cout << endl << "Output Matrix: " << endl;
//  for(i = 0; i < r1; ++i)
//  for(j = 0; j < c2; ++j)
//  {
//  cout << " " << mult[i][j];
//  //if(j == c2-1)
//  //cout << endl;
//  }
 
//  return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
// int a[10][10], b[10][10], mult[10][10],c1,c2,r1,r2,i,j,k;
// cout<<"enter rows and column of first matrix: "<<endl;
// cin>>r1>>c1;
// cout<<"enter rows and column of second matrix: "<<endl;
// cin>>r2>>c2;
// if(c1!=r2)
// {
// cout<<"matrix cannot be multiply"<<endl;
// return 0;
// }
// cout<<endl;
// cout<<"enter elements of matrix 1: "<<endl;
// for(i=0;i<r1;i++)
// for(j=0;j<c1;j++)
// {
//     cout<<"enter element of a"<<i+1<<j+1<<" : "<<endl;
//     cin>>a[i][j];
// }
// cout<<endl;
// cout<<"enter elements of matrix 2: "<<endl;
// for(i=0;i<r2;i++)
// for(j=0;j<c2;j++)
// {
//     cout<<"enter element of b"<<i+1<<j+1<<" : "<<endl;
//     cin>>b[i][j];
// }
// for(i=0;i<r1;i++)
// for(j=0;j<c2;j++)
// {
//     mult[i][j]=0;
//     for(k=0;k<c1;++k)
//     {
// mult[i][j]+=a[i][k]*b[k][j];
//     }
// }

//     cout<<endl;
//     cout<<"output matrix:"<<endl;
//     for(i=0;i<r1;i++)
//     for(j=0;j<c2;j++)
//     {
//         cout<<" "<<mult[i][j];
//     }


// return 0;
// }




// #include <iostream>  
// using namespace std;  
// int main()  
// {  
// int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
// cout<<"enter the number of row=";    
// cin>>r;    
// cout<<"enter the number of column=";    
// cin>>c;    
// cout<<"enter the first matrix element=\n";    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// cin>>a[i][j];  
// }    
// }    
// cout<<"enter the second matrix element=\n";    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// cin>>b[i][j];    
// }    
// }    
// cout<<"multiply of the matrix=\n";    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// mul[i][j]=0;    
// for(k=0;k<c;k++)    
// {    
// mul[i][j]+=a[i][k]*b[k][j];    
// }    
// }    
// }    
// //for printing result    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// cout<<mul[i][j]<<" ";    
// }    
// cout<<"\n";    
// }    
// return 0;  
// }  



// #include<iostream>
// using namespace std;
// int main(){
// int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
// cout<<"enter row of matrix:"<<endl;
// cin>>r;
// cout<<"enter column  of matrix:"<<endl;
// cin>>c;
// cout<<"enter first matrix element:\n";
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++)
//     {
//         cin>>a[i][j];
//     }
// }
// cout<<"enter second matrix element=\n";
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++)
//     {
//         cin>>b[i][j];
//     }
// }
// cout<<"multiply of matrix is=\n";
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++)
//     {
//         mul[i][j]=0;
//         for(k=0;k<c;k++)
//         {
//             mul[i][j]+=a[i][j]*b[i][j];
//         }
//     }
// }
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++)
//     {
//         cout<<mul[i][j]<<" "<<endl;
//     }
// }        
    

// return 0;
// }








//Rivision  start of array----------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={1,12,2,3,4,3,4,34,34,43};
// for(auto x:A)
// {
//     cout<<x<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={1,12,2,3,4};
// for(auto x:A)
// {
//     cout<<x<<endl;
// }
// return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
// float A[10]={1.1f,12.1f,2.2f,3,4,3,4,34,34,43};
// for(auto x:A)
// {
//     cout<<x<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// float A[]={'A',66,'B',68,70,'C'};
// for(auto x:A)
// {
//     cout<<x<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// float A[10]={1,12,2,3,34,34,43};
// for(auto x:A)
// {
//     cout<<++x<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// float A[10]={1,12,2,3,34,34,43};
// for(auto x:A)
// {
//     cout<<--x<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[5]={2,3,4,5,6};
// int sum=0;
// for(int i=0;i<5;i++)
// {
//     sum =sum+A[i];

// }
// cout<<"sum is"<<sum<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={2,3,5,6,7,3,2,0,1};
// int max =0;
// max =A[0];

// for(int i=0;i<10;i++)
// {
//    if(A[i]>max)
//    {
//     max=A[i];
//    }
// }
// cout<<"max is "<<max<<endl;


// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={5,6,11,17,19,23,66,15,7,42};
// int key,n=10;
// cout<<"enetr key";
// cin>>key;
// for(int i=0;i<10;i++)
// {
//     if(key==A[i])
//     {
//         cout<<"key is found at"<<i<< " "<<endl;
//         return 0;
//     }
    
// }
// cout<<"key is not found";
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int A[10]={3,5,7,9,11,13,17,19,23,27};
// int l=0,h=9,mid,key;
// cout<<"enter key";
// cin>>key;
// mid=(l+h)/2;
// while(l<=h)
// {
//     if(key==A[mid])
//     {
//         cout<<"key is found at "<<mid<<endl;
//         return 0;
//     }
//     else if(key<A[mid])
//     {
//         h=mid-1;
//     }
//     else
//     l=mid+1;
// }
// cout<<"key is not found"<<endl;

// return 0;
// }

// #include<iostream>
//  using namespace std;
//  int main(){
//  int A[10]={6,8,13,17,20,22,25,28,30,35};
//  int l=0,h=9,key,mid;
//  cout<<"enter key";
//  cin>>key;
//  while(l<=h)
//  {
//     mid=(l+h)/2;
//    if(key==A[mid])
//    {
//      cout<<"key is found at"<<mid<<endl;
//      return 0;
//    }
//    else if(key<A[mid])
//    {
//      h=mid-1;
//    }else 
//    l=mid+1;
//  }
//  cout<<"key is not found";
//  return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){
// int A[8]={2,3,4,5,6,7,8,9};
// int sum=0;
// for(auto x:A)
// {
//     sum=sum+x;
// }
// cout<<"sum is"<<sum;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int A[2][3]={2,3,4,5,6,7};
//     for(int i=0;i<2;i++)
//     {
//         for( int j=0;j<2;j++)
//         {
//             cout<<i<<j<<endl;
//         }
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter key";
//     cin>>n;
//  for(int i=0;i<n;i++)
//  {
//     for( int j=0;j<n;j++)
//     {
//         if(i<j)
//         {
//             cout<<"*";
//         }else
//         cout<<" ";

//     }
//     cout<<endl;
//  }   
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<10;i++)
// {
//     cout<<"*"<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<10;i++)
// { for(int j=0;j<5;j++)
// {
// cout<<j<<" ";
// }
// cout<<endl;
// }
// return 0;
// }

    // #include<iostream>
    // using namespace std;
    // int main(){
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         cout<<"("<<i<<","<<j<<")"s;
    //     }cout<<endl;
    // }
    // return 0;
    // }

    // #include<iostream>
    // using namespace std;
    // int main(){
    // int count =1;
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // return 0;
    // }

    // #include<iostream>
    // using namespace std;
    // int main(){
    // int n;
    // cout<<"enter number";
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //     if(i<=j)
    //     {
    //         cout<<"*";
    //     }else
    //     cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    // }

    // #include<iostream>
    // using namespace std;
    // int main(){
    // int A[2][3]={2,3,4,5,6,7};
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<A[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }
    // return 0;
    // }

    // #include<iostream>
    // using namespace std;
    // int main(){
    // int A[2][3]={2,3,4,5,6,7};
    // int B[2][3]={5,6,7,8,9,2};
    // int C[2][3];
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         C[i][j]=A[i][j]+B[i][j];
            
            
    //     }
    // }
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<C[i][j]<<" ";
    //     }
    // cout<<endl;
    // }

    // return 0;
    // }

// #include<iostream>
// using namespace std;
// int main(){
// int n,i;
// float num[100] ,sum=0,average;


// cout<<"entre the no. of element";
// cin>>n;
// for(i=0;i<n;i++)
// {
//     cout<<i+1<<"enter element: ";
//     cin>>num[i];
//     sum+=num[i];
// }
// average=sum/n;
// cout<<"average  is= "<<average;
// return 0;
// }
  

//   #include<iostream>
//   using namespace std;
//   int main(){
//   int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
//   cout<<"enter no. of row";
//   cin>>r;
//   cout<<"enter no. of column";
//   cin>>c;
//   cout<<"enter the first matrix elements:\n";
//   for(i=0;i<r;i++)
//   {
//     for(j=0;j<c;j++)
//     {
//         cin>>a[i][j];
//     }
//   }
//   cout<<"enter the second matrix elements:\n";
//    for(i=0;i<r;i++)
//   {
//     for(j=0;j<c;j++)
//     {
//         cin>>b[i][j];
//     }
//   }
//   cout<<"multiply of matrix is:\n";
//    for(i=0;i<r;i++)
//   {
//     for(j=0;j<c;j++)
//     {
//         mul[i][j]=0;
//     for(k=0;k<c;k++)
//     {
//         mul[i][j]+=a[i][k]*b[k][j];
//     }
//     }
//   }
//   for(i=0;i<r;i++)
//   {
//     for(j=0;j<c;j++)
//     {
//        cout<<mul[i][j]<<" ";
//     }
//     cout<<endl;
//   }

//   return 0;
//   }
// #include<iostream>
// using namespace std;
// int main(){
// int a[10][10],b[10][10],mult[10][10],r1,r2,c1,c2,i,j,k;
// cout<<"enter rows and columns of first matrix: "<<endl;
// cin>>r1>>c1;
// cout<<"enter rows and columns of second matrix: "<<endl;
// cin>>r2>>c2;
// if(c1!=r2)
// {
//     cout<<"multiplication of matrix not possible";
//     return 0;
// }
// cout<<endl;
// cout<<"enter elements of matrix 1:"<<endl;
// for(int i=0;i<r1;i++)
// {
//     for(int j=0;j<c1;j++)
//     {
//         cout<<"element of a"<<i+1<<j+1<<" "<<endl;
//         cin>>a[i][j];
//     }
// }
// cout<<endl;
// cout<<"enter elements of matrix 2:"<<endl;
// for(int i=0;i<r2;i++)
// {
//     for( int j=0;j<c2;j++)
//     {
//         cout<<"element of b"<<i+1<<j+1<<" "<<endl;
//         cin>>b[i][j];
//     }
// }
// for(int i=0;i<r1;i++)
// {
//     for(int j=0;j<c2;j++)
//     {
//         mult[i][j]=0;
//         for(k=0;k<c1;k++)
//         {
//             mult[i][j]+=a[i][k]*b[k][j];
//         }
//     }
//     cout<<endl;
//     cout<<"output of matrix:"<<endl;
//     for(int i=0;i<r1;i++)
//     for(int j=0;j<c2;j++)
//     {
//         cout<<" "<<mult[i][j];
//     }
//     }
// return 0;
// }