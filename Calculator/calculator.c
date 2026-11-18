
#include <stdio.h>

int main() {
    int choice;
    float num1, num2;
    int a, b;

    printf("===== SIMPLE CALCULATOR =====\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");

    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f\n", num1 + num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f\n", num1 - num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f\n", num1 * num2);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            if(num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                printf("Result = %.2f\n", num1 / num2);
            }
            break;

        case 5:
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);

            if(b == 0) {
                printf("Error: Modulus by zero is not allowed!\n");
            } else {
                printf("Result = %d\n", a % b);
            }
            break;

        default:
            printf("Invalid choice! Please select 1 to 5.\n");
    }

    printf("\nThank you for using Calculator!\n");

    return 0;
}

