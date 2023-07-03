#include <iostream>

using std::cout;
using std::cin;
#define NEWLINE '\n'

/*Write a modular program that reads a list of marks and display their range, mean,
median*/

unsigned totalNumber, median;
float sum, maxNum, minNum, range, mean;

void readList(float myList[], unsigned &maxNo);
float findMax(const float myList [] , unsigned maxNo);
float findMin(const float myList [] , unsigned maxNo);
float findRange(const float myList [] , unsigned maxNo);
float findmean(const float myList [] , unsigned num);
void display(const float myList [] , unsigned maxNo);

 int main(){
    
    cout<<"Enter total number of marks: ";
    cin>>totalNumber;
    float list[totalNumber];
    readList (list, totalNumber);
    findMax(list, totalNumber);
    findMin(list, totalNumber);
    findmean(list, totalNumber);
    findRange(list, totalNumber);
    display(list, totalNumber);
    
 }
 
void readList(float myList[], unsigned &maxNo){

    cout<<"\n===============Enter students' marks===============\n";
    for(int i = 0; i < totalNumber; i++){
        cout<<"Mark "<<i+1<<" : ";
        cin>>myList[i];
    }

}

float findMax(const float myList[], unsigned maxNo){

    maxNum = myList[0];
    for(int i = 1; i < maxNo; i++){
        if(myList[i] > maxNum){
            maxNum = myList[i];
        }
    }
    return maxNum;
}
float findMin(const float myList [] , unsigned maxNo){

    minNum = myList[0];
    for(int i = 1; i < maxNo; i++){
        if(myList[i] < minNum){
            minNum = myList[i];
        }
    }
    return minNum;
}

float findRange(const float myList [] , unsigned maxNo){
    range = maxNum - minNum;
    return range;
}

float findmean(const float myList [] , unsigned num){
    sum = 0;
    for(int i = 0; i <num ; i++){
        sum += myList[i];
    }
    mean = sum / num;
    return mean;
 }

void display(const float myList [] , unsigned maxNo){
    float orderedList[maxNo], storeList[maxNo];

    for(int i = 0; i < maxNo; i++){
        storeList[i] = myList[i];
    }

    float minNumList = myList[0];

    for(int i = 0; i < maxNo; i++){
        for(int j = 0; j < maxNo; j++){
            if(storeList[j] < minNumList && storeList[j] != 0){
                minNumList = myList[i];
                storeList[i] = 0;
            }
        }
        orderedList[i]=minNumList;
    }

    cout<<NEWLINE;
    if(maxNo % 2 != 0){
        median = orderedList[maxNo/2];
    }
    if(maxNo % 2 == 0){
        median = (orderedList[(maxNo/2)] + orderedList[(maxNo/2)-1])/2;
    }

    cout<<"The range of the marks is: "<<range<<NEWLINE;
    cout<<"The mean of the marks is: "<<mean<<NEWLINE;
    cout<<"The median of the marks is: "<<median<<NEWLINE;
}