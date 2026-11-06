/*Use typedef to define a structure named Student without repeatedly writing the struct keyword. Read and display the details of three student records.
• Members: Store roll number, student name, and CGPA.
*/
#include <stdio.h>
typedef struct
{
    int roll;
    char name[50];
    float cgpa;
} Student;
int main()
{
    Student students[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter CGPA for student %d: ", i + 1);
        scanf("%f", &students[i].cgpa);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("CGPA: %.2f\n", students[i].cgpa);
        printf("\n");
    }
    return 0;
}