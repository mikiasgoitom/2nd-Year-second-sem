/*9. Write a void function that takes three int arguments by reference. Your function
should modify the values in the arguments so that the first argument contains the
largest value, the second the second-largest, and the third the smallest value. Use
the swapValues function to swap the values in each of the arguments if needed. Your
function should print out the values before and after the swapping to show it works
correctly.*/

#include <iostream>
#include <utility>

using namespace std;

void SwapNum(double &num1, double &num2, double &num3);

int main(){
    double num1, num2, num3;
    cout<<"===Enter three numbers===\n";
    cin>>num1>>num2>>num3;
    cout<<"\nBerfore swap: ("<<num1<<") "<<"("<<num2<<") ("<<num3<<")\n";
    SwapNum(num1,num2,num3);
}

void SwapNum(double &num1, double &num2, double &num3){
    /*if(num3 > num1 && num3>num2){
        swap(num3, num1);
    }
    else if(num2 > num1 && num2>num1){
        swap(num2, num1);
    }
    
    if(num3 > num2){
        swap(num3, num2);
    }
    cout<<"\nAfter swap: ("<<num1<<") "<<"("<<num2<<") ("<<num3<<")\n";
    */
   double store1, store2;
   store1 = num1;
   if(num2 > num1 && num2 > num3){
    num1 = num2;
    num2 = store1;
   }
   else if (num3 > num1 && num3 > num2)
   {
    num1 = num3;
    num3 = store1;
   }
   store2 = num2;
   if (num3 > num2)
   {
    num2 = num3;
    num3 = store2;
   }

   cout<<"\nAfter swap: ("<<num1<<") "<<"("<<num2<<") ("<<num3<<")\n";
}