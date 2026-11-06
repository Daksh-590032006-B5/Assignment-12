/*Task: Define a structure named Student containing the roll number, student name, and marks in three subjects. Write a C program to read one student record and display the total marks, average marks, and grade.*/
#include <stdio.h>
struct Student 
{
    int roll;
    char name[50];
    float marks[3];
};
int main() 
{
    struct Student student;
    float total, average;
    char grade;
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &student.marks[0], &student.marks[1], &student.marks[2]);
    total = student.marks[0] + student.marks[1] + student.marks[2];
    average = total / 3.0;
    if (average >= 80) 
    {
        grade = 'A';
    } 
    else if (average >= 60) 
    {
        grade = 'B';
    } 
    else 
    {
        grade = 'C';
    }
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);
    return 0;
}