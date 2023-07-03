/*(Hypotenuse Calculations) Define a function hypotenuse that calculates the
hypotenuse of a right triangle when the lengths of the other two sides are given. The
method should take two arguments of type double and return the hypotenuse as a
double. Incorporate this method into an application that reads values for side1 and
side2 and performs the calculation with the hypotenuse method. Use Math methods
pow and sqrt to determine the length of the hypotenuse for each of the triangles in
the figure below. [Note: Class Math also provides method hypot to perform this
calculation.]*/

#include <iostream>
#include <cmath>//for hypot() function which calculates hypotenuse

using std::cout;
using std::endl;
using std::cin;

double Hypo(double side1, double side2);//calculate hypotenuse

int main(){
    double side1, side2, hypo;//value of the sides and stores hypotenuse
    cout<<"=============== Hypotenuse Calculator===============\n";
    cout<<"Enter length of side (1): ";
    cin>>side1;
    cout<<"\nEnter length of side (2): ";
    cin>>side2;
    hypo = Hypo(side1, side2);//calling Hypo function and assigning its value to hypo
    cout<<"\nThe hypotenuse is: "<<hypo<<endl;
}

double Hypo(double side1, double side2){
    return sqrt((pow(side1,2))+(pow(side2,2)));
    //return hypot(side1,side2);
}
