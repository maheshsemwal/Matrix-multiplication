#include <stdio.h>
int main()
{
    int o;
    int a11, a12, a13;
    int a21, a22, a23;
    int a31, a32, a33;

    int b11, b12, b13;
    int b21, b22, b23;
    int b31, b32, b33;

    int A11, A12, A13;
    int A21, A22, A23;
    int A31, A32, A33;

    printf("This calculator is only for squre matrix\n");
    printf("press Enter To continue...........\n");
    getch();

    printf("enter Order of Matrix: ");
    scanf("%d", &o);

    if (o == 2)
    {
        printf("For first Matrix\n");
        printf("Enter a11: \n");
        scanf("%d", &a11);

        printf("Enter a12: \n");
        scanf("%d", &a12);

        printf("Enter a21: \n");
        scanf("%d", &a21);

        printf("Enter a22: \n");
        scanf("%d", &a22);

        printf("for Second Matrix\n");
        printf("Enter b11: \n");
        scanf("%d", &b11);

        printf("Enter b12: \n");
        scanf("%d", &b12);

        printf("Enter b21: \n");
        scanf("%d", &b21);

        printf("Enter b22: \n");
        scanf("%d", &b22);

        A11 = a11 * b11 + a12 * b21;
        A12 = a11 * b12 + a12 * b22;
        A21 = a21 * b11 + a22 * b21;
        A22 = a21 * b12 + a22 * b22;

        printf("A11 is %d\n", A11);
        printf("A12 is %d\n", A12);
        printf("A21 is %d\n", A21);
        printf("A22 is %d\n", A22);
    }
    if (o == 3)
    {
        printf("For first Matrix\n");
        printf("Enter a11: \n");
        scanf("%d", &a11);

        printf("Enter a12: \n");
        scanf("%d", &a12);

        printf("Enter a13: \n");
        scanf("%d", &a13);

        printf("Enter a21: \n");
        scanf("%d", &a21);

        printf("Enter a22: \n");
        scanf("%d", &a22);

        printf("Enter a23: \n");
        scanf("%d", &a23);

        printf("Enter a31: \n");
        scanf("%d", &a31);

        printf("Enter a32: \n");
        scanf("%d", &a32);

        printf("Enter a33: \n");
        scanf("%d", &a33);

        printf("for Second Matrix\n");
        printf("Enter b11: \n");
        scanf("%d", &b11);

        printf("Enter b12: \n");
        scanf("%d", &b12);

        printf("Enter b13: \n");
        scanf("%d", &b13);

        printf("Enter b21: \n");
        scanf("%d", &b21);

        printf("Enter b22: \n");
        scanf("%d", &b22);

        printf("Enter b23: \n");
        scanf("%d", &b23);

        printf("Enter b31: \n");
        scanf("%d", &b31);

        printf("Enter b32: \n");
        scanf("%d", &b32);

        printf("Enter b33: \n");
        scanf("%d", &b33);

        A11 = a11 * b11 + a12 * b21 + a13 * b31;
        A12 = a11 * b12 + a12 * b22 + a13 * b32;
        A13 = a11 * b13 + a12 * b23 + a13 * b33;

        A21 = a21 * b11 + a22 * b21 + a23 * b31;
        A22 = a21 * b12 + a22 * b22 + a23 * b32;
        A23 = a21 * b13 + a22 * b23 + a23 * b33;

        A31 = a31 * b11 + a32 * b21 + a33 * b31;
        A32 = a31 * b12 + a32 * b22 + a33 * b32;
        A33 = a31 * b13 + a32 * b23 + a33 * b33;

        printf("A11 is %d\n", A11);
        printf("A12 is %d\n", A12);
        printf("A13 is %d\n", A13);
        printf("A21 is %d\n", A21);
        printf("A22 is %d\n", A22);
        printf("A23 is %d\n", A23);
        printf("A31 is %d\n", A31);
        printf("A32 is %d\n", A32);
        printf("A33 is %d\n", A33);
    }
}