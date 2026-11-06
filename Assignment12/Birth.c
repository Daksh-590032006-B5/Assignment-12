/*Define a Date structure to store the date of birth of a student. Using typedef, define a Student structure containing roll number, name, CGPA, and nested date of birth.
• Storage: Store the details of n students in an array of structures.
• Functions: Create functions that receive structure pointers and print the student data.
• Scholarship test: Check whether each student is eligible for a merit scholarship. A student is eligible if CGPA is greater than or equal to 8.5.
*/
#include<stdio.h>
typedef struct
{
    int day;
    int month; 
    int year;
} Date;
typedef struct
{
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;
void print(Student *s)
{
    printf("Roll Number: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("CGPA: %.2f\n", s->cgpa);
    printf("Date of Birth: %02d/%02d/%d\n", s->dob.day, s->dob.month, s->dob.year);
}
int eligible(Student *s)
{
    if(s->cgpa >= 8.5)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student students[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter CGPA for student %d: ", i + 1);
        scanf("%f", &students[i].cgpa);
        printf("Enter date of birth (day month year) for student %d: ", i + 1);
        scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, &students[i].dob.year);
    }
    printf("\nStudent Details:\n");
    for(int i = 0; i < n; i++)
    {
        print(&students[i]);
        if(eligible(&students[i])==1)
            printf("Eligible for Merit Scholarship\n");
        else
            printf("Not Eligible for Merit Scholarship\n");
        printf("\n");
    }
    return 0;
}