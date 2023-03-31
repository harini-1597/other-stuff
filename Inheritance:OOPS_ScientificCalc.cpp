// uses concepts of: multiple inheritance,  classes & objects

// program which askes user if they would like to use the simple / scientific calculator and performs 
//basic functions like add, subtract, etc and scientific functions like sin, inverse sin, log base 10, etc

#include<iostream>
#include<cmath>
using namespace std;

const double pi = acos(-1);

class Simple{
    float op1, op2;
    char op;
    public:
        void get_op(){
            cout << "Enter operation: ";  // to be entered in form 1+2 
            cin >> op1 >> op >> op2;    
        }
        
        float show_result(){
            switch(op){
                case '+':
                    return(op1 + op2);
                    break;
                case '-':
                    return(op1 - op2);
                    break;
                case '*':
                    return(op1 * op2);
                    break;
                case '/':
                    return(op1 / op2);
                    break;
                default:
                    break;
            }
            return 0;
        }
};

class Scientific{
    float op; 
    int x;

    public:
        void get_op(){
            cout << "Enter value of integer / degrees:  "; 
            cin >> op;
            cout << "1. sin()" << endl;           
            cout << "2. cos()" << endl;
            cout << "3. arcsin()" << endl;
            cout << "4. arccos()" << endl;            
            cout << "5. exp()" << endl;
            cout << "6. log10()" << endl;
            cout << "Enter digit for the function you'd like to implement: ";
            cin >> x;  
        }

        float show_result(){
            switch (x){
                double rad;
                case 1:
                    rad = op * pi/180;
                    return(sin(rad));
                    break;
                case 2:
                    rad = op * pi/180;
                    return(cos(rad));
                    break;
                case 3:
                    return(asin(op));
                    break;
                case 4:
                    return(acos(op));
                    break;
                case 5:
                    return(exp(op));
                    break;
                case 6:
                    return(log10(op));
                    break;
                default:
                    break;
            }
            return 0;
        }
};

class Display : public Simple, public Scientific{
    public: 
        void display(void){
            int x;
            cout << "1. Simple" << endl;           
            cout << "2. Scientific" << endl;           
            cout << "Which calculator would you like to use? ";
            cin >> x;
            
            Simple var1;
            Scientific var2;
            
            switch (x)
            {
            case 1:
                var1.get_op();
                cout << var1.show_result();
                break;
            
            case 2:
                var2.get_op();
                cout << var2.show_result();
                break;

            default:
                break;
            }
        }
};

          
int main(){
    Display main_call;
    main_call.display();       
    return 0;
}