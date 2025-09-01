#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter marks for subject 1: ");
    scanf("%d", &a);

    printf("Enter marks for subject 2: ");
    scanf("%d", &b);

    printf("Enter marks for subject 3: ");
    scanf("%d", &c);

    printf("Enter marks for subject 4: ");
    scanf("%d", &d);

    printf("Enter marks for subject 5: ");
    scanf("%d", &e);

    int total = a + b + c + d + e;
    float percentage = (total / 500.0) * 100;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage > 90 && percentage <= 100) {
        printf("GRADE A+\n");
    } else if (percentage >= 80) {
        printf("GRADE A\n");
    } else if (percentage >= 70) {
        printf("GRADE B\n");
    } else if (percentage >= 60) {
        printf("GRADE C\n");
    } else if (percentage >= 50) {
        printf("GRADE D\n");
    } else if (percentage >= 40) {
        printf("GRADE E\n");
    } else if (percentage >= 0) {
        printf("Fail\n");
    } else {
        printf("ERROR: Invalid marks entered.\n");
    }

    return 0;
}