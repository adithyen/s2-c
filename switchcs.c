#include <stdio.h>
#include <math.h>
int main() {
    int n, choice, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nChoose an option:\n");
    printf("1. Check Odd/Even\n");
    printf("2. Check Positive/Negative\n");
    printf("3. Check Prime/Not\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            if (n % 2 == 0)
                printf("%d is Even.\n", n);
            else
                printf("%d is Odd.\n", n);
            break;
        case 2:
            if (n > 0)
                printf("%d is Positive.\n", n);
            else if (n < 0)
                printf("%d is Negative.\n", n);
            else
                printf("%d is neither Positive nor Negative.\n", n);
            break;
        case 3:
            if (n <= 1) {
                isPrime = 0;
            } else {
                for (i = 2; i <= sqrt(n); i++) {
                    if (n % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime)
                printf("%d is a Prime number.\n", n);
            else
                printf("%d is Not a Prime number.\n", n);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
