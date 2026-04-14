#include <stdio.h>

int main(void) {
    double a, b, result;
    char op;

    printf("Masukkan operasi (format: 3.5 + 4.2): ");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Input tidak valid\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Error: pembagian dengan nol\n");
                return 1;
            }
            result = a / b;
            break;
        default:
            printf("Operator tidak valid\n");
            return 1;
    }

    printf("%.1lf %c %.1lf = %.2lf\n", a, op, b, result);

    return 0;
}