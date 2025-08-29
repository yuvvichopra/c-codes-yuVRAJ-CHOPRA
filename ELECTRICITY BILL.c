#include <stdio.h>

int main() {
    int units;
    float bill;

    // Input units used
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill according to unit slabs
    if (units <= 50) {
        bill = units * 3;
    }
    else if (units <= 150) {
        bill = (50 * 3) + (units - 50) * 4;
    }
    else if (units <= 250) {
        bill = (50 * 3) + (100 * 4) + (units - 150) * 5;
    }
    else {
        bill = (50 * 3) + (100 * 4) + (100 * 5) + (units - 250) * 6;
    }

    // Add 20% surcharge
    bill = bill + (bill * 0.20);

    // Print final bill
    printf("Total electricity bill = Rs. %.2f\n", bill);

    return 0;
}
