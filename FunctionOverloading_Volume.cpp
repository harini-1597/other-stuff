// uses concepts of: function overloading

// computes volume of three different solids: cuboid, cylinder and cube
#include<iostream>
using namespace std;

int volume(double r, int h){
    return(3.14 * r *r *h);
}

int volume(int a){
    return (a * a * a);
}

int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    int l, b, h1, r, h2, a;
    cout<<"Enter dimensions for cuboid: "; cin>>l>>b>>h1;    
    cout<<"Enter dimensions for cylinder: "; cin>>r>>h2;
    cout<<"Enter dimensions for cube: "; cin>>a;    
    cout<<"The volume of cuboid of is: "<<volume(l, b, h1)<<endl;
    cout<<"The volume of cylinder is: "<<volume(r, h2)<<endl;
    cout<<"The volume of cube is: "<<volume(a)<<endl;
    return 0;
}