// #include<iostream>
// #include<cmath>  
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int num=0;
//     int i=0;
//     while(n!=0)
//     {
//         int bit=(n&1);

//         num=(bit * pow(10,i))+num;
//         i++;
//        n= n>>1;
//     }
//     cout<<num;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(void){

//    cout<<" Find Size of fundamental datatype\n";
//    cout<<"---------------------------------\n";
//    cout<<"the size of(char) is   "<<sizeof(char)<<"byte \n";
//    cout<<"the size of(short) is    "<<sizeof(short)<<"byte \n";
//    cout<<"the size of(int) is  "<<sizeof(int)<<"byte \n";
//    cout<<"the size of(long) is    "<<sizeof(long)<<"byte \n";
//    cout<<"the size of(long long) is    "<<sizeof(long long)<<"byte \n";
//    cout<<"the size of(float) is     "<<sizeof(float)<<"byte \n";
//    cout<<"the size of(double) is   "<<sizeof(double)<<"byte \n";
//    cout<<"the size of(long double) is    "<<sizeof(long double)<<"byte \n";
//    cout<<"the size of(bool) is   "<<sizeof(bool)<<"byte \n";
    
//   return 0;  
// }

// #include<iostream>
// using namespace std;
// class rectangle
// {
//     public:
//     int length;
//     int  breadth;
//     int area()
//     {
//         return length*breadth;
//     }
// };
// int main()
// {
// rectangle r1,r2;
//  r1.length=10;
//  r1.breadth=10;
//  r2.length=15;
//  r2.breadth=10;
// cout<<r1.area()<<endl;
// cout<<r2.area()<<endl;
// return 0;
// }

// #include<iostream>
//  using namespace std;
//  class rectangle
//  {
//      private:
//      int length;
//      int  breadth;
//      public:
//      void intdata(int len, int brth)
//      {
//        length=len;
//        breadth=brth;
//      }
//      int area()
//      {
//          return length*breadth;
//      }
//  };
//  int main()
//  {
//  rectangle r1,r2;
//   r1.intdata(10,10);
//   r2.intdata(15,10);
//  cout<<r1.area()<<endl;
//  cout<<r2.area()<<endl;
//  return 0;
//  }

// #include<iostream>
// using namespace std;
// class rectangle
// {public:
// int length;
// int breadth;
// int area()
// {
//     return length*breadth;
// }
// int perimeter()
// {
//     return 2*(length+breadth);
// }
// };
// int main(){
// rectangle r;
// rectangle *p;
// p=&r;
// p->length=10;
// p->breadth=15;
// cout<<p->area()<<endl;
// cout<<p->perimeter()<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// class rectangle
// {public:
// int length;
// int breadth;
// int area()
// {
//     return length*breadth;
// }
// int perimeter()
// {
//     return 2*(length+breadth);
// }
// };
// int main()
// {
//     rectangle *p;
//     p=new rectangle();
//     rectangle *q=new rectangle();
//     p->length=15;
//     p->breadth=10;
//     cout<<p->area()<<endl;
    
// }
// #include<iostream>
// using namespace std;
// class rectangle
// {
//     private:
//     int length;
//     int breadth;
//     public:
//     void intdata(int len,int brth)
//     {
//         length=len;
//             if(length>=0)
//         {
//             length=len; 
//         }else
//         length=0;
//         breadth=brth;
//         if(breadth>=0)
//         {
//             breadth=brth;
//         }
//     else
//     breadth=0;
//     }
//     int area()
//     {
//         return length*breadth;
//     }
// };
// int main(){
// rectangle r;
// r.intdata(12,-5);
// cout<<r.area();
// return 0;
// }

// #include<iostream>
// using namespace std;
// class rectangle
// {
//     private:
//     int length;
//     int breadth;
//     public:
//     void setlength(int l)
//     {
//         if(length>=0)
//         length=l;
//         else
//         breadth=0;
//     }
//     void setbreadth(int b)
//     {
//         if(breadth>=0)
//         breadth=b;
//         else
//         breadth=0;
//     }
//     void getlength()
//     {
//         return length;
//     }
//     void getbreadth()
//     {
//         return breadth;
//     }
// };
// int main(){
//     rectangle r;
//     r.setlength(10);
//     r.setbreadth(-5);
//     cout<<r.area();
//     cout<<"length is"<<r.getlength();

// return 0;
// }

// #include<iostream>
// using namespace std;
// class Rectangle
// {
//     private:
//     int length;
//     int breadth;
//     public:

//     ////???non parametric???////
//      //Rectangle()
//       //{
//        //   length=1;
//         //  breadth=1;
//      //}
//      ////???parametric???////
//     Rectangle(int l=1,int b=1)
//     {
//         setlength(l);
//         setbreadth(b);
//     }
//     Rectangle(Rectangle &r)
//     {
//       length=r.length;
//       breadth=r.breadth;
//     }
//     void setlength(int l)
//     {
//         if(l>0)
//         length=l;
//         else
//         length=1;
//     }
//     void setbreadth(int b)
//     {
//         if(b>0)
//         breadth=b;
//         else
//         breadth=1;
//     }
//     int getlength()
//     {
//         return length;
//     }
//     int getbreadth()
//     {
//         return breadth;
//     }
//     int area()
//     {
//         return length*breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length+breadth);
//     }
// };
// int main(){
// Rectangle r1(10);
// Rectangle r2(r1);
// cout<<"the area of rectangle r1 is"<<r1.area()<<endl;
// cout<<"the area of rectangle r2 is"<<r2.area()<<endl;

// }

// #include<iostream>
// using namespace std;
// class Rectangle
// {
//     private:
//     int length;
//     int breadth;
//     public:
    
//     void setlength(int l)
//     {
//         if(l>0)
//         length=l;
//         else
//         length=1;

//     }
//     void setbreadth(int b)
//     {
//         if(b>0)
//         breadth=b;
//         else
//         breadth=1;
//     }
//     int getlength()
//     {
//         return length;
//     }
//     int getbreadth()
//     {
//         return breadth;
//     }
//     int area()
//     {
//         return length*breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length+breadth);
//     }
// };
// int main(){
//     Rectangle r(10,5);
//     cout<<r.area()<<endl;
//     cout<<r.perimeter()<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Rectangle
// {
// private:
// int length;
// int breadth;
// public:
// Rectangle();
// Rectangle(int a,int b);
// Rectangle(Rectangle &a);
// int  getlength(){return length;}
// int getbreadth(){return breadth;}
// void setlength(int l);
// void setbreadth(int b);
// int area();
// int perimeter();
// bool issquare();
// ~Rectangle();
// };
// int main(){
//     Rectangle r1(10,10);
//     cout<<"Area"<<r1.area()<<endl;
//     if(r1.issquare())
//     cout<<"yes"<<endl;
// }
//     Rectangle::Rectangle()
//     {
//         length=1;
//         breadth=1;
//     }
//     Rectangle::Rectangle(int l,int b)
//     {
//         length=l;
//         breadth=b;
//     }
//     Rectangle::Rectangle(Rectangle &r)
//     {
//         length=r.length;
//         breadth=r.breadth;
//     }
//     void Rectangle::setlength(int l)
//     {
//         length=l;
//     }
//     void Rectangle::setbreadth(int b)
//     {
//         breadth=b;
//     }
//     int Rectangle::area()
//     {
//         return length*breadth;
//     }
//     int Rectangle::perimeter()
//     {
//         return 2*(length+breadth);
//     }
//     bool Rectangle::issquare()
//     {
//         return length==breadth;
//     }
//     Rectangle::~Rectangle()
//     {
//      cout<<"Rectangle Destroyed";
//     } 

// #include<iostream>
// using namespace std;
// class Test
// {public:
// void fun1()
// {
//     cout<<"in line\n";
// }
//  inline void fun2();
// };
// void Test::fun2()
// {
//     cout<<"non linear\n";
// }
// int main(){
// Test t;
// t.fun1();
// t.fun2();
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Rectangle
// {
//     private:
//     int length;
//     int breadth;
//     public:
//     Rectangle(int length,int breadth)
//     {
//         this->length=length;
//         this->breadth=breadth;
//     }
//     int area()
//     {
//         return length*breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length+breadth);
//     }
// };
// int main(){
//     Rectangle r1(10,5);

// return 0;
// }


// #include<iostream>
// using namespace std;
// struct Demo
// {
//     int x;
//     int y;
//     void Display()
//     {
//         cout<<x<<" "<<y<<endl;
//     }
// };
// int main(){
// Demo d;
// d.x=10;
// d.y=5;
// d.Display();
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//     int roll;
//     string name;
//     int mathMarks;
//     int phyMarks;
//     int cheMarks;
//     public:
//     Student(int r,string n,int m,int p,int c)
//     {
//         roll=r;
//         name=n;
//         mathMarks=m;
//         phyMarks=p;
//         cheMarks=c;

//     }
//     int total()
//     {
//       return mathMarks+phyMarks+cheMarks;
//     }
//     char grade()
//     {
//         float average=total()/3;
//         if(average>60)
//         return 'A';
//         else if(average>=40 && average<60)
//         returb 'B';
//         else
//         return 'C';
//     }
// };
// int main(){
//     int roll;
//     string name;
//     int m,p,c;
//     cout<<"enter Roll no. of a Student: ";
//     cin>>roll;
//     cout<<"enter name of a Student:";
//     cin>>name;
//     cin<<"enter marks of three subjects:";

// return 0;
// }

