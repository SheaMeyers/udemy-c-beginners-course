#include <stdio.h>

int main(int argc, char *argv[])
{
    int minutesEntered;

    printf("Please enter the number of minutes:");
    scanf("%d", &minutesEntered);

    double minutesInADay = 60 * 24;
    double minutesInAYear = minutesInADay * 365;

    double days = minutesEntered/minutesInADay;
    double years = minutesEntered/minutesInAYear;

    printf("Days is: %lf\n", days);
    printf("Years is: %lf\n", years);

    return 0;
}