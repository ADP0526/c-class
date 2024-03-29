//This program calcualtes weekly pay based on input.
#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main() 
{
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;  

    printf("Enter hours worked this week?\n");

    //Get input
    scanf("%d", &hours);

// Caluclate grosspay
    if (hours <= 40)
        grossPay = hours * PAYRATE;
    else
    {
        grossPay = 40 * PAYRATE;
        double overTimPay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimPay;
    }

//Calculate taxes
if (grossPay <= 300) {
taxes = grossPay * TAXRATE_300;
}
else if (grossPay > 300 && grossPay < 450)
{
    taxes = 300 * TAXRATE_300;
    taxes += (grossPay - 300 ) * TAXRATE_150;
}
else if (grossPay > 450)
{
    taxes = 300 * TAXRATE_300;
    taxes += 150 * TAXRATE_150;
    taxes += (grossPay - 450) * TAXRATE_REST;
}

// Calucalte the netpay
netPay = grossPay - taxes;

//display output
printf("Your gross pay this week is: %.2f\n", grossPay);
printf("Your taxes this week is: %.2f\n", taxes);
printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
}