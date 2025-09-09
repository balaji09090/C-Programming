#include <stdio.h>

int main()
{
    int pID1, pID2, pID3;
    int quantity1, quantity2, quantity3;
    char pName1[50], pName2[50], pName3[50];
    float price1, price2, price3, total, discount, bill;
    FILE *fp;

    fp = fopen("bill.txt", "w");

    printf("Enter the Details of Product 1\n");
    printf("Enter Product ID: ");
    scanf("%d", &pID1);
    printf("Enter Product Name: ");
    scanf("%s", pName1);
    printf("Enter Quantity: ");
    scanf("%d", &quantity1);
    printf("Enter Price: ");
    scanf("%f", &price1);

    printf("\nEnter the Details of Product 2\n");
    printf("Enter Product ID: ");
    scanf("%d", &pID2);
    printf("Enter Product Name: ");
    scanf("%s", pName2);
    printf("Enter Quantity: ");
    scanf("%d", &quantity2);
    printf("Enter Price: ");
    scanf("%f", &price2);

    printf("\nEnter the Details of Product 3\n");
    printf("Enter Product ID: ");
    scanf("%d", &pID3);
    printf("Enter Product Name: ");
    scanf("%s", pName3);
    printf("Enter Quantity: ");
    scanf("%d", &quantity3);
    printf("Enter Price: ");
    scanf("%f", &price3);

    total = (quantity1 * price1) + (quantity2 * price2) + (quantity3 * price3);

    if (total >= 100000)
        discount = total * 0.20;
    else if (total >= 80000)
        discount = total * 0.15;
    else if (total >= 50000)
        discount = total * 0.10;
    else if (total >= 30000)
        discount = total * 0.05;
    else
        discount = 0;

    bill = total - discount;

    // Print to file
    fprintf(fp, "........ BILL .......\n");
    fprintf(fp, "ID\tName\tQuantity\tPrice\n");
    fprintf(fp, "%d\t%s\t%d\t\t%.2f\n", pID1, pName1, quantity1, price1);
    fprintf(fp, "%d\t%s\t%d\t\t%.2f\n", pID2, pName2, quantity2, price2);
    fprintf(fp, "%d\t%s\t%d\t\t%.2f\n", pID3, pName3, quantity3, price3);
    fprintf(fp, "\nTotal Amount : %.2f", total);
    fprintf(fp, "\nDiscount     : %.2f", discount);
    fprintf(fp, "\nFinal Bill   : %.2f\n", bill);

    fclose(fp);

    printf("\nBill generated successfully in bill.txt\n");

    return 0;
}