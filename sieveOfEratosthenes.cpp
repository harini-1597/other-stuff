// uses concepts of: for loop, if-else statements

// Sieve Of Eratosthenes - given a number n, print all prime numbers greater than or equal to n
#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter n: "; 
    cin >> n;
    for(int i=2; i < n; i++){
        if ((i % 2 == 0) && (i > 2)){
            continue;
        }
        else if ((i % 3 == 0) && (i > 3)){
            continue;
        }
        else if ((i % 5 == 0) && (i > 5)){
            continue;
        }
        else{
            cout << i << " ";
        }
    }

    return 0;
}