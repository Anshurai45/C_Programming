
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;
    int n;

  
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Compound Interest formula: A = P (1 + r/n)^(nt)
    amount = principal * pow((1 + (rate / (n * 100))), (n * time));
    compoundInterest = amount - principal;

    // Display results
    printf("The compound interest is: %f\n", compoundInterest);
    printf("The total amount after %f years is: %f\n", time, amount);

    return 0;
}