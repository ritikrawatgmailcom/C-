// #include<iostream>
// using namespace std;
// int add(int a,int b,int c=0,int d=0)
// {
//     return a+b+c+d;
// }
// int main(){
// cout<<add(10,5)<<endl;
// cout<<add(10,3,2)<<endl;
// cout<<add(2,5,0)<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// template<class T>
// T max(T a,T b,T c)
// {
//     return (a>b&&a>c)?a:(b>c)?b:c;
// }
// int main(){
// cout<<max(2,5,4)<<endl;
// cout<<max(2.3,5.6,4.9)<<endl;
// cout<<max(2.2f,5.5f,4.4f)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int swap(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
// int x=10,y=20;
// cout<<x<<" "<<y<<endl;
// swap(x,y);
// cout<<x<<" "<<y<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int swap(int *a,int *b)
// {
//     cout<<a<<" "<<b<<endl;
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// cout<<a<<" "<<b<<endl;
// }
// int main(){
// int x=10,y=20;
// cout<<x<<" "<<y<<endl;
// swap(&x,&y);
// cout<<x<<" "<<y<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int swap(int &a,int &b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
// int x=10,y=20;
// cout<<x<<" "<<y<<endl;
// swap(x,y);
// cout<<x<<" "<<y<<endl;
// return 0;
// }

///return by addresssas

//  #include<iostream>
//  using namespace std;
//  int* fun(int size)
//  {
//      int *p=new int[5];
//      for(int i=0;i<5;i++)
//      {
//          p[i]=5*i;
//      }
//      cout<<p<<endl;
//      return p;
//  }
//  int main(){
//  int *q=fun(5);
//  cout<<q<<endl;
//  for(int i=0;i<5;i++)
//  {
//     cout<<q[i]<<endl; 
//  }
//  return 0;
//  }

// #include<iostream>
// using namespace std;
// int & fun(int &x)
// {
//     return x;
// }
// int main(){
// int a=10;
// fun(a)=25;
// cout<<a<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int fun(int &a)
// {
//     cout<<a;
//     return a;
// }
// int main(){
// int x=10,y;
// y=fun(x);
// return 0;
// }


// #include<iostream>
// using namespace std;
// int g=0;
// int fun()
// {
//     int a=5;
//     g=g+a;
//     return g;
// }
// int main(){
// g=15;
// fun();
// g++;
// cout<<g<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int g=5;
// void fun()
// {
// int g=10;
// {
//     int g=0;
//     g++;
//     cout<<g<<endl;
// }
//  cout<<g<<endl;
// }
// int main(){
// cout<<g<<endl;
// fun();
// cout<<g<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int x=10;
// int main(){
// int x=20;
// {
//     int x=30;
//     cout<<x<<endl;
// }
// cout<<x<<endl;
// cout<<::x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int v=0;
// void fun()
// {
//     int a=5;
//     v++;
//     cout<<a<<" "<<v<<endl;
// }
// int main()
// {
// fun();
// fun();
// fun();

// return 0;
// }
// #include<iostream>
// using namespace std;
// void fun(int n)
// {
//     if(n>0)
//     {
//       cout<<n<<endl;
//       fun(n-1);
//     }
    
// }
// int main(){
// int x=5;
// fun(x);

// return 0;
// }


// #include<iostream>
// using namespace std;
// void fun(int n)
// {
//     if(n>0)
//     {
//         fun(n-1);
//       cout<<n<<endl;
      
//     }
    
// }
// int main(){
// int x=5;
// fun(x);

// return 0;
// }


// #include<iostream>
// using namespace std;
// // function for linear search
// /* if match found then return index of search key
//    else return -1 */
// int linearSearch(int arr[], int n, int key) 
// {
//   for(int i=0; i<n; i++) 
//   {
//     if(key == arr[i])
//       return i;
//   }
//   return -1;
// }
// // main function
// int main()
// {
//   int array[] = {50, 90, 30, 70, 60};
//   int key = 0;

//   // take key
//   cout << "Enter Search Element: ";
//   cin >> key;

//   // find the size array
//   int size = sizeof(array)/sizeof(array[0]);

//   // search key
//   int index = linearSearch(array, size, key);
  
//   if(index == -1)
//     cout << key << " Not Found" << endl;
//   else
//     cout << key << " Found at Index = " << index << endl;

//   return 0;
// }

