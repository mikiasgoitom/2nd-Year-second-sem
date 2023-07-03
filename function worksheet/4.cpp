/*4. For a function named getProduct and that has parameters namely num1 and num2
which their data type is integer and double respectively and that should multiply the
integer value by the double number and then return the result as a double number.
• Write a function declaration (prototype) for the getProduct function. • Write
the function call statement to the getProduct function, and assigning its return
value to a product variable.
• Name the actual arguments firstNum and secondNum.*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

double getProduct(int num1, double num2);

int main(){
    int firstNum;
    double  secondNum ,product;
    
    cout<<"Enter the first and second numbers: ";
    cin>>firstNum>>secondNum;

    product = getProduct(firstNum, secondNum);

    cout<<"\nThe product of ("<<firstNum<<") and ("<<secondNum<<") is: "<<product<<endl;
}

double getProduct(int num1, double num2){
    return double(num1*num2);
}