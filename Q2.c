#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units > 0) {
        if (units <= 50) {
            bill = units * 2;
        } else {
            bill += 50 * 2;
            if (units <= 100) {
                bill += (units - 50) * 3;
            } else {
                bill += 50 * 3;
                if (units <= 200) {
                    bill += (units - 100) * 4;
                } else {
                    bill += 100 * 4;
                    if (units <= 300) {
                        bill += (units - 200) * 5;
                    } else {
                        bill += 100 * 5;
                        if (units <= 500) {
                            bill += (units - 300) * 6;
                        } else {
                            bill += 200 * 6;
                            printf("Units above 500 are not valid.\n");
                        }
                    }
                }
            }
        }
        printf("Total electricity bill: ₹%.2f\n", bill);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}