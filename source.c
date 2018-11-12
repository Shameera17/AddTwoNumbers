#include <stdio.h>

int main() {

    double num1, num2, total;

    printf("Enter the first number \n");
    //input the number
    scanf("%f", &num1);
    printf("Enter the second number \n");
    scanf("%f", &num2);
    total = num1 + num2;
    printf("total is %f \n", total);

    system("pause");
    return 0;
}
