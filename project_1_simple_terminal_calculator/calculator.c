#include <stdio.h>
#include <stdlib.h>

double sum(int *a, int *b) {
    return (double)*a + (double)*b;
}

double sub(int *a, int *b) {
    return (double)*a - (double)*b;
}

double multiply(int *a, int *b) {
    return (double)*a * (double)*b;
}

double divide(int *a, int *b) {
    if (b == 0) {
        // Return NAN to indicate undefined operation
        printf("Error : cannot devide by 0");
        return 1;
    }
    return (double)*a / (double)*b;
}

int main() {
    int input1;
    int input2;
    int operator;
    int result;

    printf("Enter 1st number: ");
    scanf("%d", &input1);

    printf("Enter 2nd number: ");
    scanf("%d", &input2);

    printf("Choose operation:\n(1) +\n(2) -\n(3) *\n(4) /\n");
    scanf("%d", &operator);

    if (operator == 1) {
        result = sum(&input1, &input2);
    } else if (operator == 2) {
        result = sub(&input1, &input2);
    } else if (operator == 3) {
        result = multiply(&input1, &input2);
    } else if (operator == 4) {
        result = divide(&input1, &input2);
    }

    printf("Result: %d\n", result);

    return 0;
}

