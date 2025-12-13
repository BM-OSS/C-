#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>

typedef struct Student
{
    char Name[50];
    int ID;
    float Score;
}
Student;

void student_input_information(Student *students,int count);
void student_output_information(Student *students,int count);
void student_sort_of_information(Student *students,int count);

#endif