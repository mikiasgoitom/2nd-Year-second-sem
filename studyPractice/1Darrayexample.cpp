#include <iostream>

int Read(int array[], int size);
int Read2(int array[5], int size);
int Display(int array[5], int size);
int Sum(int array[5]);

int main(){

    int numCollection[5];
    Read(numCollection, 5);
    Display(numCollection, 5);
    Sum(numCollection);
}

int Read(int array[], int size = 5){
    for(int i = 0; i < 5; i++){
        std::cin>>array[i];
    }
    return 0;
}

int Display(int array[5], int size){
    std::cout<<std::endl;
    for(int i = 0; i < 5; i++){
        std::cout<<array[i]<<" ";
    }
    return 0;
}

int Sum(int array[5]){
    int sum;
    for(int i = 0; i < 5; i++){
        sum += array[i];
    }
    std::cout<<sum;
    return 0;
}