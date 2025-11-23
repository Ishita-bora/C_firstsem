#include <stdio.h>

int main() {
    int year, totalDays = 0, dayIndex;
    char *dayNames[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Enter a year: ");
    scanf("%d", &year);

    for (int y = 1; y < year; y++) 
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
        {
            totalDays += 366;
        } else 
        {
            totalDays += 365;
        }
    }

    dayIndex = totalDays % 7;

    printf("January 1st of %d is a %s.\n", year, dayNames[dayIndex]);

    return 0;
}