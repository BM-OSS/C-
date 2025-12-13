#include "student.h"
#include <stdio.h>

int main()
{
    int count=3;
    Student students[count];
    student_input_information(students,count);
    student_sort_of_information(students,count);
    student_output_information(students,count);
}