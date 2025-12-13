#include "student.h"

void student_output_information(Student *students,int count)
{
    for(int i;i<count;i++)
    {
        printf("Name:%s ID:%d Score:%.1f\n",students[i].Name,students[i].ID,students[i].Score);
    }
}
