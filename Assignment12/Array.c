/*
Store the details of n students using an array of structures. Calculate the average marks of every student and display the student with the highest average.
If two or more students have the same highest average, display all such students
*/
#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks[3];
    float average;
};
int main()
{
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter roll number for student : ");
        scanf("%d", &students[i].roll);
        printf("Enter name for student : ");
        scanf("%s", students[i].name);
        printf("Enter marks in three subjects for student : ");
        scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
        students[i].average = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3.0;
    }
    float highest= students[0].average;
    for (i = 1; i < n; i++)
    {
        if (students[i].average > highest)
        {
            highest = students[i].average;
        }
    }
    printf("Student(s) with the highest average marks:\n");
    for (i = 0; i < n; i++)
    {
        if (students[i].average == highest)
        {
            printf("Roll Number: %d, Name: %s, Average Marks: %.2f\n", students[i].roll, students[i].name, students[i].average);
        }
    }
    return 0;
}