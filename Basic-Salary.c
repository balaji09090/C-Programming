#include<stdio.h>
int main ()
{
    float bs,da,hra,tax,totalSalary;
    int eid;
    char name[100];
    FILE *fp;

      fp = fopen("Basic-Salary.txt","w");

    printf("Enter Employee Details : ");
    printf("\nID : ");
    scanf("%d",eid);
    printf("Name : ");
    scanf("%s", &name);
    printf("Basic Salary : ");
    scanf("%f",&bs);
    printf("DA (%%) : ");
    scanf("%f",&da);
    printf("HRA (%%) : ");
    scanf("%f",&hra);

    if (bs >= 100000)
      tax = 20;
    else if (bs >= 80000)
      tax = 15;
    else if (bs >= 50000)
      tax = 10;
    else if (bs >= 30000)
      tax = 5;
    else 
      tax = 0;

    totalSalary = bs + ((bs * (da+hra-tax))/100);

    fprintf(fp,"\nID                    :%d ",eid);
    fprintf(fp,"\nName                  :%s",name);
    fprintf(fp,"\nBasic Salary          :%.2f ",bs);
    fprintf(fp,"\nDA (%%)               :%2.f ",da);
    fprintf(fp,"\nHRA (%%)              :%2.f ",hra);
    fprintf(fp,"\nTAX (%%)              :%2.f",tax);
    fprintf(fp,"\nTotal Salary          :%2.f",totalSalary);
   
    return 0;    
}