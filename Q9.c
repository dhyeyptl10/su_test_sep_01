#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    do {
        printf("Enter a number (if u want to stop enter 0): ");
        scanf("%d", &num);

        if (num != 0) {
            sum += num;
            count++;
        }

    } while (num != 0);

    if (count > 0) {
        float average = (float)sum / count;
        printf("Sum = %d, Average = %.2f\n", sum, average);
    } else {
        printf("invalid\n");
    }

    return 0;
}