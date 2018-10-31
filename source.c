#include <stdio.h>

int main() {

    int num1, num2, total;

    printf("Enter the first number \n");
    //input the number
    scanf("%d", &num1);
    printf("Enter the second number \n");
    scanf("%d", &num2);
    total = num1 + num2;
    printf("total is %d \n", total);

    system("pause");
    return 0;
}
