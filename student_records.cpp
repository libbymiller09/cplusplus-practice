#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct student{
    string student_name;
    int student_id;
};

//enum student_sports{Football, Baseball, Tennis, Basketball};

namespace student_init {
    const int student_count = 3;
    student new_students[student_count];
}

void populate_student_data(student new_students[], int count) {
    for (int i=0; i<count; i++) {
        cout<<"Enter student name: ";
        cin>>new_students[i].student_name;
        
        cout<<"Enter student id: ";
        cin>>new_students[i].student_id;
    }
}

void print_student_data(student new_students[], int count) {
    cout<<setw(15)<<setfill('#')<<""<<endl;

    for (int i=0; i<count; i++) {
        cout<<"Student Name: "<<new_students[i].student_name<<endl;
        cout<<"Student ID: "<<new_students[i].student_id<<endl;
        cout<<setw(15)<<setfill('#')<<""<<endl;
    }
}
