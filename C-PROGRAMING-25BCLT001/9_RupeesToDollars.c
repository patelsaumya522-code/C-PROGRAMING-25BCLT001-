#include <stdio.h>
int main() {
    float rupees, dollars;
    printf("Enter amount in rupees: " );
    scanf("%f", &rupees);
    dollars = rupees / 84;
    printf("Dollars = %.2f\n", dollars);
    return 0;
}
