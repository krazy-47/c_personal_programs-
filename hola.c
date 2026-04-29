#include <stdio.h>
#include <math.h>
int main() {
float total_debt, interest_rate,  monthly_payment, monthly_rate, total_paid, total_interest;
int years, months;
printf("enter your debt: ");
scanf("%f", & total_debt );
printf("enter you interest rate: ");
scanf("%f", & interest_rate );
printf("enter the years that you want to pay: ");
scanf("%d", &years );
interest_rate = interest_rate / 100;
monthly_rate = interest_rate / 12; 
months = years * 12;
monthly_payment = total_debt * (monthly_rate * pow(monthly_rate + 1, months) ) / (pow((1 + monthly_rate), months) - 1);
printf("this is the total months that you need to pay: %.2f dolars \n",monthly_payment);
total_paid = monthly_payment * months;
total_interest = total_paid - total_debt;

printf("Total amount paid: $%.2f\n", total_paid);
printf("Total interest paid: $%.2f\n", total_interest);
   return 0;
}  