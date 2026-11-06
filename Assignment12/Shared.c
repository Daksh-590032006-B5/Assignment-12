/*Define a union named Data containing int i, float f, and char c.
• Assignments: Assign 25 to i, 7.5f to f, and A to c. Display each value immediately after its assignment.
• Size: Display the size of the union using sizeof.
*/
#include<stdio.h>
union Data
{
    int i;
    float f;
    char c;
};
int main()
{
    union Data dat;
    dat.i=25;
    printf("Value of i: %d\n", dat.i);
    dat.f=7.5f;
    printf("Value of f: %.2f\n", dat.f);
    dat.c='A';
    printf("Value of c: %c\n", dat.c);
    printf("Size of union: %zu bytes\n", sizeof(dat));
    return 0;
}