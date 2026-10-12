#include<stdio.h>
int main()
{
    int var[3][3];
    printf("A 3X3 Matrix\n");
    printf("Enter the value for\n");
    for(int i = 0;i < 3;i++)
        {
            for(int j = 0;j < 3;j++)
                {
                    printf("Row[%d] and Column[%d]: ", i+1, j+1);
                    scanf("%d", &var[i][j]);
                }
        }
    printf("Your matrix is: \n");
    for(int i = 0;i < 3;i++)
        {
            printf("[");
            for(int j = 0;j < 3;j++)
                {
                    printf("%d", var[i][j]);
                }
            printf("]\n");
        }
    int det_R1_C = var[0][0]*((var[1][1]*var[2][2])-(var[1][2]*var[2][1]));   
    int det_R2_C = var[0][1]*((var[1][0]*var[2][2])-(var[1][2]*var[2][0]));
    int det_R3_C = var[0][2]*((var[1][0]*var[2][1])-(var[2][0]*var[1][1]));
    printf("The Determinant of this matrix is %d", det_R1_C - det_R2_C + det_R3_C);
    printf("Thanks for using the Determinant calculator");
    return 0;
}
