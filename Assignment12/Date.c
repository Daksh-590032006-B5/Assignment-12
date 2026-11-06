/*Define a Date structure containing day, month, and year. Place it inside an Employee structure containing the employee name, employee ID, salary, and date of joining.
• Input and output: Read and display three employee details.
*/
#include <stdio.h>
struct Date 
{
    int day;
    int month;
    int year;
};
struct Employee 
{
    char name[50];
    int id;
    float salary;
    struct Date doj;
};
int main() 
{
    struct Employee employees[3];
    int i;
    for (i = 0; i < 3; i++) 
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Date of Joining (day month year): ");
        scanf("%d %d %d", &employees[i].doj.day, &employees[i].doj.month, &employees[i].doj.year);
    }
    printf("\nEmployee Details:\n");
    for (i = 0; i < 3; i++) 
    {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Date of Joining: %02d/%02d/%d\n", employees[i].doj.day, employees[i].doj.month, employees[i].doj.year);
    }
    return 0;
}