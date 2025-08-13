#include<stdio.h>
int main()
{
   int pID,quantity1,quantity2,quantity3;
   char pName1,pName2,pName3;
   float price1,price2,price3,total,discount,bill;
   FILE *fp;
     fp = fopen("bill.txt","w");
  
   printf("Enter the Details of Product");
   printf("\nEnter Product ID :");
   scanf("%d",&pID);
   printf("Enter Product Name 1 :");
   scanf("%s",pName1);
   printf("Enter Quantity 1 :");
   scanf("%d",&quantity1);
   printf("Enter Price 1:");
   scanf("%f",&price1);

    printf("\nEnter Product ID :");
   scanf("%d",&pID);
   printf("Enter Product Name 2:");
   scanf("%s",pName2);
   printf("Enter Quantity 2 :");
   scanf("%d",&quantity2);
   printf("Enter Price 2 :");
   scanf("%f",&price2);
  
    printf("\nEnter Product ID :");
   scanf("%d",&pID);
   printf("Enter Product Name 3 :");
   scanf("%s",pName3);
   printf("Enter Quantity 3 :");
   scanf("%d",&quantity3);
   printf("Enter Price 3 :");
   scanf("%f",&price3);
  
  
   total = (quantity1 * price1)+(quantity2 * price2)+(quantity3 * price3);
   bill = total-discount;
   
   if(total >= 100000)
      discount=20;
    else if(total >= 80000)
      discount=15;
    else if(total >= 50000)
      discount=10;
    else if(total >= 30000)
      discount=5;
    else 
       discount=0;
       
        fprintf(fp,"........Bill.......");
        fprintf(fp,"\t Id%d  \tName%s   \tQuantity%d   \tPrice%f",&pID,pName1,pName2,pName3,quantity1,quantity2,quantity3,price1,price2,price3);
        fprintf(fp,"\nTotal Amount         :%.2f",total);
        fprintf(fp,"\nDiscount             :%.2f",discount);
        fprintf(fp,"\nBill                 :%.2f",bill);
        return 0;
    }
    