#include "student.h"

void student_sort_of_information(Student *students,int count)
{
    Student temp;
    for(int i=0;i<count;i++)
    {
        int m=0;
        for(int j=0;j<count-i-1;j++)
        {
            if(students[j].Score<students[j+1].Score)
            {
                temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
                m=1;
            }
        }
        if(m==0)
        {
            break;
        }
    }
}