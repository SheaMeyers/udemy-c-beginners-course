#include <stdio.h>

int main(int argc, char *argv[])
{
    double hoursWorked;
    double wage;

    printf("Please enter the number of hours worked:");
    scanf("%lf", &hoursWorked);

    printf("Please enter your hourly wage:");
    scanf("%lf", &wage);
    
    double overtimePay = 0.0;
    double grossPay = 0.0;
    double taxes = 0.0;

    if (hoursWorked > 40) {
        double overtimeHours = hoursWorked - 40;
        overtimePay = overtimeHours * wage * 1.5;
        grossPay = 40 * wage + overtimePay;
    } else {
        grossPay = hoursWorked * wage;
    }

    if (grossPay < 300) {
        taxes = grossPay * 0.15;
    } else {
        taxes = taxes + 300 * 0.15;
    }

    if (grossPay > 300 && grossPay < 450) {
        taxes = taxes + (grossPay-300) * 0.2;
    } else {
        taxes = taxes + (150 * 0.2);
    }

    if (grossPay > 450) {
        taxes = taxes + (grossPay-450) * 0.25;
    }

    double netPay = grossPay - taxes;

    printf("Gross Pay is: %lf\n", grossPay);
    printf("Tax is: %lf\n", taxes);
    printf("Net Pay is: %lf\n", netPay);

    return 0;
}