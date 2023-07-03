#include <iostream>

int sum(int, int);
double sum(double, double);
float sum(float, float, float);

int main() {
    std::cout<<sum(5.6,6.0)<<std::endl;
    std::cout<<sum(5.05,9.5)<<std::endl;
    std::cout<<sum(5,2)<<std::endl;
    return 0;
}

int sum(int a, int b){
    return a + b;
}
double sum(double a, double b){
    return a + b;
}
float sum(float a, float b, float c){
    return a + b + c;
}
