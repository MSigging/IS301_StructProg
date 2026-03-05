/*  Problem: 
    Algorithm:
    Developed by: Megdelene SIGGING _ 240162
    Date:

*/

#include <stdio.h>

int main(){

    // Define constants
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_PRICE = 35.20;
    const float HARD_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

    // Declare variables
    int tvQty, monitorQty, flashQty, hardQty, printerQty;
    float tvTotal, monitorTotal, flashTotal, hardTotal, printerTotal;
    float subtotal, tax, total;

    // Input
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tvQty);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitorQty);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flashQty);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hardQty);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &printerQty);

    // Calculations
    tvTotal = tvQty * TV_PRICE;
    monitorTotal = monitorQty * MONITOR_PRICE;
    flashTotal = flashQty * FLASH_PRICE;
    hardTotal = hardQty * HARD_PRICE;
    printerTotal = printerQty * PRINTER_PRICE;

    subtotal = tvTotal + monitorTotal + flashTotal + hardTotal + printerTotal;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // Output
    printf("\nQTY  DESCRIPTION        UNIT PRICE   TOTAL PRICE\n");
    printf("------------------------------------------------------------\n");
    printf("%-4d TV                %10.2f %12.2f\n", tvQty, TV_PRICE, tvTotal);
    printf("%-4d Monitor           %10.2f %12.2f\n", monitorQty, MONITOR_PRICE, monitorTotal);
    printf("%-4d Flash Drive       %10.2f %12.2f\n", flashQty, FLASH_PRICE, flashTotal);
    printf("%-4d Hard Drive        %10.2f %12.2f\n", hardQty, HARD_PRICE, hardTotal);
    printf("%-4d Deskjet Printer   %10.2f %12.2f\n", printerQty, PRINTER_PRICE, printerTotal);
    printf("------------------------------------------------------------\n");

    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax: %.2f\n", tax);
    printf("Total: %.2f\n", total);
    printf("------------------------------------------------------------\n");

    return 0;
}