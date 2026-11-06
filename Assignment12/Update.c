/*Define a Student structure containing roll number, name, marks in three subjects, and grade. Demonstrate passing a structure by value and passing it by reference.
• Functions: Write displayStudent(struct Student s), totalMarks(struct Student s), and updateGrade(struct Student *s, char newGrade).
*/
#include<stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks[3];
    char grade;
}
displayStudent(struct Student s)
{
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f, %.2f, %.2f\n", s.marks[0], s.marks[1], s.marks[2]);
    printf("Grade: %c\n", s.grade);
}
int totalMarks(struct Student s)
{
    return s.marks[0] + s.marks[1] + s.marks[2];
}
void updateGrade(struct Student *s, char newGrade)
{
    s->grade = newGrade;
}
int main()
{
    struct Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &student.marks[0], &student.marks[1], &student.marks[2]);
    printf("Enter grade: ");
    scanf(" %c", &student.grade);

    printf("\nStudent Details:\n");
    displayStudent(student);

    float total = totalMarks(student);
    printf("Total Marks: %.2f\n", total);
    
    char newGrade;
    printf("Enter new grade to update: ");
    scanf(" %c", &newGrade);
    updateGrade(&student, newGrade);
    printf("\nUpdated Student Details:\n");
    displayStudent(student);
    return 0;
}