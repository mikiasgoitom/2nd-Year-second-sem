#include <iostream>

const int row = 3, col = 4;
int trial2D[row][col];

void Read(int array [][col]);
void Print(int array [][col]);
void to1D(int array1D[], int size);

int main(){
    
    int trial1D[row*col];
    Read(trial2D);
    Print(trial2D);
    to1D(trial1D, (row*col));
}

void Read(int array[][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cin>>array[i][j];
        }
    }
}

void Print(int array[][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout<<array[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
}

void to1D(int array1D[], int size){
    for(int j = 0, k = 0; j < col; j++){
        for(int i = 0; i < row; i++){
            array1D[k] = trial2D[i][j];
            k++;
        }
    }
    for(int k = 0; k < (row*col); k++){
        std::cout<<array1D[k]<<" ";
    }
}