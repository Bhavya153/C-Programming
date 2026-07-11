#include <stdio.h>

int main() {
    int salary, gross;
    int hra = 10, da = 5, ta = 8;

    printf("Enter Base Salary: ");
    scanf("%d", &salary);

    gross = salary + (salary * hra / 100) + (salary * da / 100) + (salary * ta / 100);

    printf("Gross Salary: Rs. %d", gross);

    return 0;
}