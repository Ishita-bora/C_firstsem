#include <stdio.h>

int main() {
    float population;
    int year;

    printf("Enter the initial population: ");
    scanf("%f", &population);

    printf("\nYear\tPopulation\n");

    for (year = 1; year <= 10; year++) {
        population = population + (population * 0.10);  
        printf("%d\t%.2f\n", year, population);
    }

    return 0;
}
