// uses concepts of: operator overloading

// to perform addition and subtraction operations on complex numbers
#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public:
        void get_comp(){
            cout << "Enter real part: "; 
            cin >> real;
            cout << "Enter imaginary part: "; 
            cin >> img;
        }

        void disp_comp(){
            cout << "Number is: " << real << "+" << img << "i" << endl;
        }

        // overloading operator +
        Complex operator +(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }

        // overloading operator +
        Complex operator -(Complex c){
            Complex temp;
            temp.real = real - c.real;
            temp.img = img - c.img;
            return temp;
        }
};

          
int main(){
    Complex c1, c2;
    c1.get_comp(); c1.disp_comp();
    c2.get_comp(); c2.disp_comp();
    
    Complex sum, diff;
    sum = c1+c2;
    diff = c1-c2;
    cout << "Sum "; sum.disp_comp();
    cout << "Difference "; diff.disp_comp() ;
    return 0;
}
