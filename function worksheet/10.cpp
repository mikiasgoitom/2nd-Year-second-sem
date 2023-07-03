/*10. Write a program that reads in a length in feet and inches and outputs the equivalent
length in meters and centimeters. Use at least three functions: one for input, one or
more for calculating, and one for output. Include a loop that lets the user repeat this
computation for new input values until the user says he or she wants to end the
program. There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12
inches in a foot.*/

#include <iostream>

float foot[100], inch[100], meter[100], cMeter[100];//recives foot and inch from user 
int  counter = 0, quit = 1;//counts the input

int Read();
void Calculate();
void Display();

int main (){
    std::cout<<"======Metric Conversion======\n\n";
    std::cout<<"Input(to exit enter 0): \n";
    do{
        Read();
    }while (quit != 0);
    
    Calculate();
    Display();
}

int Read(){//recives input from the user
    
        std::cout<<"\n\nInput "<<counter+1<<" (f): ";
        std::cin>>foot[counter];
        if(foot[counter] == 0){
            quit = 0;
            return 0;
        }

        std::cout<<std::endl<<"Input "<<counter+1<<" (i): ";
        std::cin>>inch[counter];
        if(inch[counter] == 0){
            quit = 0;
            return 0;
        }
        counter ++;
        return 0;
}

void Calculate(){
    for(int j = 0;j <= counter; j++){
        meter[j] = foot[j]*0.3048;
        cMeter[j] = inch[j]*2.54;
    }
}
void Display(){
    std::cout<<"\t\t\tMeter";
    std::cout<<"\t|Centimeter\n";

    for(int j = 0;j <= counter; j++){
        std::cout<<"Measurment (f)("<<j+1<<"): \t"<<meter[j]<<"\t|"<<std::endl;
        std::cout<<"Measurment(in)("<<j+1<<"): \t\t|"<<cMeter[j]<<std::endl;
    }
}
