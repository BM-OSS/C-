#include "student.h"

void student_input_information(Student *students,int count)
{
    for(int i=0;i<count;i++)
    {
        printf("name[%d]:",i+1);
        scanf("%s",&students[i].Name);
        printf("ID[%d]:",i+1);
        scanf("%d",&students[i].ID);
        printf("score[%d]",i+1);
        scanf("%f",&students[i].Score);
    }
}
