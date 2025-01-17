#include <stdio.h>

int main() {
    float hours, hourly_wage, gross_pay, taxes, net_pay;

    // Get hours worked and hourly wage from user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay with overtime
    if (hours > 40) {
        gross_pay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);
    } else {
        gross_pay = hours * hourly_wage;
    }

    // Calculate taxes based on the given tax rate
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Display results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
