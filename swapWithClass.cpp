// uses concepts of: classes, pointers, call by reference

// takes two numbers and swaps them
#include<iostream>
using namespace std;

class c2;

class c1{
    int a;
    friend void swap(c1 &, c2 &);   
    public:                        
        void var1(int v1){
            a = v1;
        }
        void var2(){
            cout << "variable a is: " << a << endl;
        }
};

class c2{
    int b;
    friend void swap(c1 &, c2 &);
    public:
        void var1(int v2){
            b = v2;
        }
        void var2(){
            cout << "variable b is: " << b << endl;
        }
};

void swap(c1 &xx, c2 &yy){
    int temp;
    temp = xx.a;
    xx.a = yy.b;
    yy.b = temp;
}

int main(){
    c1 x;
    c2 y;
    x.var1(8);
    x.var2();
    y.var1(5);
    y.var2();

    swap(x,y);
    x.var2();
    y.var2();
    return 0;
}