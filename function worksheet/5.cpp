/*5. Write a function-based C++ statement that adds the cube of the number stored in
the num1 variable to the square root of the number stored in the num2 variable.
The program should prompt the user to enter the two number inside main()
function. The statement should assign the result to the answer variable and return
to the main() function. All of the variables have the double data type. (Tip: use built
in library to find the cube and square of the numbers)*/

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

double Add(double a, double b);

int main(){
    double num1, num2, sum;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    sum = Add(num1, num2);
    cout<<endl<<"The sum is: "<<sum<<endl;
}

double Add(double a, double b){
    cout<<std::setprecision(10);
    return (pow(a,3)+sqrt(b));
}
