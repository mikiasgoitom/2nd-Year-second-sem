#include <iostream>
#include <string>

using std::cout;
using std::cin;
#define NEWLINE '\n'

struct student{// students data
    std::string name;
    int coursesTaken;
    float mark[100];
    int creditHr[100];
    char grade[100];
    float GPA[100];
};

student stud[100];

float numStud, gradeValue, totalCreditHr, totalGradeValue;//number of students, weight of grade

void Input();
void Calculate();
void Dispaly();

int main(){
    cout<<"****************************"<<NEWLINE;
    cout<<"Enter the number of students: ";
    cin>>numStud;
    Input();
    Calculate();
    Dispaly();
}

void Input(){//to recive input from the user
    for(int i = 0; i < numStud; i++){//to store for more than one student
        cout<<NEWLINE<<"Enter student name: ";
        cin>>stud[i].name;
        cout<<NEWLINE<<"Enter total courses taken: ";
        cin>>stud[i].coursesTaken;
        for(int j = 0; j < stud[i].coursesTaken; j++){//for data for the courses the student get
            cout<<NEWLINE<<"Enter mark "<<j+1<<" : ";
            cin>>stud[i].mark[j]; 
            cout<<NEWLINE<<"Enter credit hour "<<j+1<<" : ";
            cin>>stud[i].creditHr[j];
        }
    }
}
void Calculate(){//claculates the input recived form the user
    for(int i = 0; i < numStud; i++){
        for(int j = 0; j < stud[i].coursesTaken; j++){
            if(stud[i].mark[j] >= 80){
                stud[i].grade[j] = 'A';
                gradeValue = 4;
            }
            else if(stud[i].mark[j] >= 70 && stud[i].mark[j] < 80){
                stud[i].grade[j] = 'B';
                gradeValue = 3;
            }
            else if(stud[i].mark[j] >= 60 && stud[i].mark[j] < 70){
                stud[i].grade[j] = 'C';
                gradeValue = 2;
            }
            else if(stud[i].mark[j] >= 50 && stud[i].mark[j] < 60){
                stud[i].grade[j] = 'D';
                gradeValue = 1;
            }
            else {
                stud[i].grade[j] = 'F';
                gradeValue = 0;
            }
            totalCreditHr += stud[i].creditHr[j];
            totalGradeValue += gradeValue * stud[i].creditHr[j];
        }
        stud[i].GPA[i] = totalGradeValue / totalCreditHr;//calculates GPA
        //return stud[i].GPA[i];
    }
}
void Dispaly(){//displays the students records
    cout<<NEWLINE<<"Name\t\tGrade\tCredit hour";

    for(int i = 0; i < numStud; i++){
        cout<<NEWLINE<<i+1<<". "<<stud[i].name<<"\t\t";
        for(int j = 0; j < stud[i].coursesTaken; j++){
            cout<<NEWLINE<<"\t\t"<<stud[i].grade[j]<<"\t"<<stud[i].creditHr[j]<<NEWLINE;
        }
        cout<<NEWLINE<<"\t\t\t\t\tCGPA = "<<stud[i].GPA[i];
    }
}