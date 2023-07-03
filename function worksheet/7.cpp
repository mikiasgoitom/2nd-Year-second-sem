/*7. Write an application that calculates the product of a series of integers that are passed
to function product using a variable-length argument list. Test your method with
several calls, each with a different number of arguments.*/

#include <iostream>
#include <stdarg.h>

using std::cout;
using std::cin;
using std::endl;

int Product(int howMany, ...);
//int Read(int list[], int totNum);

int howMany, product = 1;//stores number of numbers inputed, stores the product of the numbers

int main(){
    cout<<Product(5, 15,6,5,6,4)<<endl;
}

//int Read(int list[], int totNum)

int Product(int howMany, ...){
    
    va_list arguments;//to create arg list
    va_start (arguments, howMany);//find the first argument
    for(int i = 0; i < howMany; i++){
        product *= va_arg(arguments, int); //get each arguments
    }
    va_end (arguments);
    return product;
}