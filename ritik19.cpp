// #include<iostream>
// using namespace std;
// int main() 
// {
// int i,n;
// cout<<"enter no."<<endl;
// cin>>n;
// for(i=1;i<11;i++)
// {
//     cout<<n<<"X"<<i<<"="<<n*i<<endl;
// }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int n,sum;
// cout<<"enter no.";
// cin>>n;
// sum=n*(n+1)/2;
// cout<<"sum is"<<sum<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n,sum=0;
// cout<<"enter no.";
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     sum=sum+i;
// }
// cout<<"sum of first "<<n<<"natural no. is"<<sum<<endl;
// return 0;
// }

//  #include<iostream>
//  using namespace std;
//  int main(){
//  int i,n,count=0,sum=0;
//  cout<<"enter no.";
//  cin>>n;
//  cout<<"factors of "<<n<<"is"<<endl;
//  for(i=1;i<=n;i++)
//  {
//  if(n%i==0)
//  {
//      cout<<i<<" "<<endl;
//      count++;
//      sum=sum+i;
//  }
//  }
//  cout<<"sum is"<<sum <<endl;
//  if(count==2)
//  {
//     cout<<"prime no.\n";
//  }
//  else
//  cout<<" not a prime no.\n";
// if(2*n==sum)
// {
//     cout<<"primitive no.\n";
// }
// else
// cout<<"not primitive no.\n";
//  return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){
// int n ,r;
// cout<<"enter no.";
// cin>>n;

// while(n>0 )
// {
//    r=n%10;
//    n=n/10; 

// cout<<r<<endl;
// }


// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int r,n,sum=0,m;
// cout<<"enter no.";
// cin>>n;
// m=n;
// while(n>0)
// {
//     r=n%10;
//     n=n/10;
//     cout<<r<<endl;

//     sum=sum+r*r*r;
// }
// cout<<"sum is"<<sum;
// if(sum==m)
// {
//     cout<<"it is armstrong no.";
// }
// else
// cout<<"it is not a armstrong no.";

// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n,r,rev=0;
// cout<<"enter no.";
// cin>>n;
// while(n>0)
// {
//     r=n%10;
//     n=n/10;
//   rev=rev*10+r; 
   
// }
// cout<<"reverse  is"<<rev;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n,r,rev=0,m;
// cout<<"enter no.";
// cin>>n;
// m=n;
// while(n>0)
// {
//     r=n%10;
//     n=n/10;
//     rev=rev*10+r;

// }
// cout<<"reverse is"<<rev;
//  if(m==rev)
//  {
//      cout<<"it is pelindrome";

//  }else
//  cout<<"it is not a pelindrome";
// return 0;
// }

//  #include<iostream> 
//  using namespace std; 
//  int main() 
//  {
//     int n,r,rev=0; 
//     cout<<"enter no.";
//      cin>>n;

//  while(n>0) 
//  {    
//     r=n%10;     
//     n=n/10;    
//     rev=rev*10+r;
//  }
//     n=rev;
//     while(n>0)
//     {   
//       r=n%10;  
//       switch(r)    
//        {         
//         case 1: cout<<"one ";    
//             break;                    
//         case 2: cout<<"two ";         
//             break;         
//         case 3: cout<<"three ";      
//             break;            
//         case 4: cout<<"four ";      
//             break;         
//         case 5: cout<<"five ";   
//             break;
//         case 6:  cout<<"six ";    
//             break;        
//         case 7: cout<<"seven ";    
//             break;        
//         case 8: cout<<"eight  ";   
//             break;      
//         case 9: cout<<"nine ";   
//             break;        
//         case 0: cout<<"zero ";   
//             break;        
//         default:cout<<" ";   
//             break;         
//     }     
//          n=n/10; 
//         } 
//         return 0;
//     }


// #include <iostream>  
// using namespace std;  
// int main()  
// {  
// int n,sum=0,r;    
// cout<<"Enter the Number= ";    
// cin>>n;    
// while(n>0)    
// {    
// r=n%10;        
// n=n/10;    
//  sum=sum*10+r;  
// }    
// n=sum;    
// while(n>0)    
// {    
// r=n%10;    
// switch(r)    
// {    
// case 1:    
// cout<<"one ";    
// break;    
// case 2:    
// cout<<"two ";    
// break;    
// case 3:    
// cout<<"three ";  
// break;    
// case 4:    
// cout<<"four ";  
// break;    
// case 5:    
// cout<<"five ";  
// break;    
// case 6:    
// cout<<"six ";   
// break;    
// case 7:  
// cout<<"seven ";  
// break;  
// case 8:    
// cout<<"eight ";    
// break;    
// case 9:    
// cout<<"nine ";  
// break;    
// case 0:    
// cout<<"zero ";  
// break;    
// default:    
// cout<<" ";    
// break;    
// }    
// n=n/10;    
// } 
// return 0;   
// }  


// #include<iostream>
// using namespace std;
// int main(){
// int n,r,sum=0;
// cout<<"enter no.";
// cin>>n;
// while(n!=0)
// {
//     r=n%10;
//     n=n/10;

//     sum=sum+r;
// }
// cout<<"sum is"<<sum<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter two number";
//     cin>>m>>n;
//     while(m!=n)
//     {
//         if(m>n)
//         m=m-n;
//         else if(m<n)
//         n=n-m;
        
//     }
//     cout<<n<<endl;

// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n,r,rev=0,m;
// cout<<"enter no.";
// cin>>n;
// m=n;
// while(n>0)
// {
//     r=n%10;
//     n=n/10;
//     rev=rev*10+r;
// }
// cout<<"reverse is"<<rev<<endl;
// if(m==rev)
// {
//     cout<<"it is palindrome";
// }
// else
// cout<<"it is not palindrome";
// return 0;
// }

