#include <stdio.h>

double sum(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    return a / b;
}
void calculator(int selector) {
    double num1, num2;

    printf("���� 1 �Է� : ");
    scanf_s("%lf", &num1);

    printf("���� 2 �Է� : ");
    scanf_s("%lf", &num2);
    double result;
    if (selector == 1) {
        result = sum(num1, num2);
    }
    else if (selector == 2) {
        result = sub(num1, num2);
    }
    else if (selector == 3) {
        result = mul(num1, num2);
    }
    else {
        result = div(num1, num2);
    }
    printf("%lf", result);
}
int main() {
    int sel;
    printf("1.+ 2.- 3.* 4.%%:");
    scanf_s("%d", &sel);

    calculator(sel);
    return 0;
}
