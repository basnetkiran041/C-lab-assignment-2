/*A departmental store places an order with a company for n pieces of heater, m pieces of toasters and p pieces of fans. The cost of the items are as follows:
Heater :NRs. 1500 per piece.
ToasterNRs. 200 per piece.
Fan :NRs. 400 per piece.
The discount allowed for various items are 5% for heater, 15% for fan and 10% for toaster. The company charges 10% as sales tax on all items on net value after deducting the discount. Write a program which computes m, n and p and computes the amount to be aid by the store.*/
#include <stdio.h>

int main() {
    int n, m, p; // Number of heaters, toasters, and fans
    float heater_cost, toaster_cost, fan_cost;
    float heater_total, toaster_total, fan_total, total_cost;
    float heater_discount, toaster_discount, fan_discount;
    float sales_tax;

    // Constants for cost per piece
    const float HEATER_PRICE = 1500.0;
    const float TOASTER_PRICE = 200.0;
    const float FAN_PRICE = 400.0;

    // Discount percentages
    const float HEATER_DISCOUNT = 0.05;
    const float TOASTER_DISCOUNT = 0.10;
    const float FAN_DISCOUNT = 0.15;

    // Sales tax percentage
    const float SALES_TAX_RATE = 0.10;

    // Input the number of items ordered
    printf("Enter the number of heaters ordered: ");
    scanf("%d", &n);
    printf("Enter the number of toasters ordered: ");
    scanf("%d", &m);
    printf("Enter the number of fans ordered: ");
    scanf("%d", &p);

    // Calculate the total cost before discount
    heater_total = n * HEATER_PRICE;
    toaster_total = m * TOASTER_PRICE;
    fan_total = p * FAN_PRICE;

    // Apply the discount for each item
    heater_discount = heater_total * HEATER_DISCOUNT;
    toaster_discount = toaster_total * TOASTER_DISCOUNT;
    fan_discount = fan_total * FAN_DISCOUNT;

    // Calculate the net cost after discount
    heater_total -= heater_discount;
    toaster_total -= toaster_discount;
    fan_total -= fan_discount;

    // Calculate total cost after discounts
    total_cost = heater_total + toaster_total + fan_total;

    // Apply sales tax to the net cost
    sales_tax = total_cost * SALES_TAX_RATE;
    total_cost += sales_tax;

    // Output the final amount to be paid
    printf("The total amount to be paid by the store is: NRs. %.2f\n", total_cost);

    return 0;
}
