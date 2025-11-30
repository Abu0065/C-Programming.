// wap to create a structure of student having member variables as Stu_ID, Stu_Name and Stu_marks of 2 subjects.
#include <stdio.h>
struct Student
{
    int Stu_ID;
    char Stu_Name[50];
    float Stu_Marks1;
    float Stu_Marks2;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }
    struct Student stu[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter Student ID: ");
        scanf("%d", &stu[i].Stu_ID);
        printf("Enter Student Name: ");
        scanf("%s", stu[i].Stu_Name);
        printf("Enter Marks for Subject 1: ");
        scanf("%f", &stu[i].Stu_Marks1);
        printf("Enter Marks for Subject 2: ");
        scanf("%f", &stu[i].Stu_Marks2);
    }

    for(int i = 0; i < n; i++)
    { 
        printf("\nStudent Details:\n");
        printf("ID: %d\n", stu[i].Stu_ID);
        printf("Name: %s\n", stu[i].Stu_Name);
        printf("Marks in Subject 1: %.2f\n", stu[i].Stu_Marks1);
        printf("Marks in Subject 2: %.2f\n", stu[i].Stu_Marks2);
    }

    return 0;
}