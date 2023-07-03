#include <iostream>

int sum(int num);

int main(){
    int num, total;
    std::cout<<"Enter the number to which you want the sum of the first consecutive natureal numbers: ";
    std::cin>>num;
    total = sum(num);
    std::cout<<total<<std::endl;
}

int sum(int num){
    
    if(num != 0){
        return (num + sum(num-1));
    }
    else{
        return num;
    }
}
