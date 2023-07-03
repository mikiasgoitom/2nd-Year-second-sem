#include <iostream>

int Fibonacci(int);

int main(){
    int num, reciveNum;
    std::cout<<"======= Fibonacci Sequence ========"<<std::endl;
    restart:std::cout<<"Enter a number: ";
    std::cin>>num;

    if(num < 0){
        std::cout<<"Invalid input can not enter a negative number! Please try again(to exit enter 0)";
        goto restart;//goes to line 8
    }

    //if(num == 0){
    //    return 0;
    //}

    reciveNum = Fibonacci(num);
    std::cout<<"\n_____________________________\nf("<<num<<")= "<<reciveNum<<std::endl;

    return 0;
}

int Fibonacci(int num){
    if(num < 3 && num > 0){
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else{
        return (Fibonacci(num - 1) + Fibonacci(num - 2));
    }
}