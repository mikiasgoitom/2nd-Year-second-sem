/*8. Write a logical (i.e. Boolean) valued function which takes a single integer parameter,
and returns "True" if and only if the integer is a prime number between 1 and 1000
(note that 1 is not usually counted as a prime number). Test your function by calling it
from the main function with different inputs.
Hints:
(i) if a number is not prime, it has at least one prime factor less than or equal
to its square root,
(ii) (32 x 32) = 1024 and 1024 > 1000.*/

#include <iostream>
#include <cmath>

using namespace std;

bool Check(int num);

int main(){
    int num;
    bool prime;
    cout<<"======This is a prime number detector from 1-1000======";
    cout<<"\nEnter a number(1-1000): ";
    cin>>num;
    prime = Check(num);
    cout<<"\nThe result is: "<<boolalpha<<prime<<endl;
}

bool Check(int num){
    bool prime;
    if(num > 0 && num < 1000){
        int squareRoot = sqrt(num);
        for(int i = 2; i <= squareRoot; i++){
            prime = true;
            if(num % i == 0){
                prime = false;
            }
        }
    }
    else{
        cout<<"\nYour number is out of bound!";
    }
    return prime;
}