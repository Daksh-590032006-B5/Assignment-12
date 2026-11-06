/*Define a structure named Employee containing an integer member id and an anonymous union.
• Union members: Include hourly_rate of type int and monthly_salary of type float in the anonymous union.
• Output: Display the employee ID and salary
*/
#include<stdio.h>
struct Employee
{
    int id;
    union
    {
        int hourly_rate;
        float monthly_salary;
    };
};
int main()
{
    struct Employee e;
    e.id=101;
    e.hourly_rate=50;
    printf("Employee ID: %d\n",e.id);
    printf("Hourly Rate: %d\n",e.hourly_rate);
    e.monthly_salary=3000.0f;
    printf("Monthly Salary: %.2f\n",e.monthly_salary);
    return 0;
}