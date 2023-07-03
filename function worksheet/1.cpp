#include <iostream>

using std::cout;
using std::cin;
#define NEWLINE '\n';

float Mult(float, float);

int main(){
    int num1 = 7, num2 = 6;
    cout<<"("<<num1<<") multiplied by ("<<num2<<") gives: "<<Mult(num1,num2)<<NEWLINE;
}

float Mult(float a, float b){
    return a * b;
}