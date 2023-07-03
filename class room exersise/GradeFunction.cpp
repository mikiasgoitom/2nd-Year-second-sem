#include <iostream>

using std::cout;
using std::cin;
#define NEWLINE "\n"

void Input(int numberOfCoursestaken);
float Calculate();
void Display();

    float mark[100], creditHr[100], gradeValue[100], totalGradeValue, totalCreditHr, GPA, CGPA;
    int coursesTaken;
    char grade[100];

int main(){
    cout<<"******************************"<<NEWLINE;
    cout<<"Enter the number of courses taken: ";
    cin>>coursesTaken;
    Input(coursesTaken);
    CGPA = Calculate();
    Display();
}

void Input(int courses){//this function recives input such as course mark and course's credut hr
    
    for(int i  = 0; i < courses; i++){
        cout<<NEWLINE<<"Enter your test mark "<<i+1<<": ";
        cin>>mark[i];
        cout<<NEWLINE<<"Enter this course's credit hour "<<i+1<<": ";
        cin>>creditHr[i];
    }
}

float Calculate(){

    for(int i = 0; i < coursesTaken; i++){
        if(mark[i] >= 80){
            grade[i] = 'A';
            gradeValue[i] = 4;
        }
        else if(mark[i] >= 70 && mark[i] < 80){
            grade[i] = 'B';
            gradeValue[i] = 3;
        }
        else if( mark[i] >= 60 && mark[i] < 70){
            grade[i] = 'C';
            gradeValue[i] = 2;
        }
        else{
            grade[i] = 'F';
            gradeValue[i] = 0;
        }
    totalGradeValue += gradeValue[i]*creditHr[i];
    totalCreditHr += creditHr[i];
    }
    GPA = totalGradeValue / totalCreditHr;
    return GPA;
}

void Display(){
    cout<<NEWLINE<<"Your Grades are: ";
    cout<<NEWLINE<<"Grade\t\t\tCredit hours";
    for(int i = 0; i < coursesTaken; i++){
        cout<<NEWLINE<<"Grade"<<i+1<<" : "<<grade[i]<<"\t\tCredit hour "<<i+1<<" : "<<creditHr[i]<<NEWLINE;
    }
    cout<<"Your GPA is: "<<CGPA<<NEWLINE;
}
