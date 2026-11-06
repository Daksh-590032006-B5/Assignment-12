/*Define a union named Number containing int i and float f. Create an array of three union variables.
• Integer values: Store three integers in the array and display them.
• Overwrite operation: Overwrite the second element with a floating-point value and display that value.
*/
#include<stdio.h>
union Number
{
    
    int i;
    float f;
};
int main()
{
    union Number n[3];
    n[0].i=10;
    n[1].i=20;
    n[2].i=30;
    printf("Integer values:\n");
    for(int j=0;j<3;j++)
    {
        printf("%d\n",n[j].i);
    }
    n[1].f=15.5f;
    printf("Overwritten value of n[1].f: %.2f\n",n[1].f);
    return 0;
}