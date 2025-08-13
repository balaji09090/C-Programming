#include<stdio.h>
int main()
{
    char ch,studentName[100],sub1[100],sub2[100],sub3[100],Grade;
    int roll;
    float total,avg,m1,m2,m3;
    
    FILE *fp;

      fp = fopen("Studentavg.txt","w");

    printf("Enter student Details: ");
    printf("\nEnter Student Roll number: ");
    scanf("%d",&roll);
    printf("Student Name : ");
    gets(studentName);
    gets(studentName);
    
    printf("Subjects 1: ");
    gets(sub1);
    printf(" Marks 1 :");
    scanf("%f",&m1);

    printf("Subjects 2: ");
    gets(sub2);
    gets(sub2);
    printf(" Marks 2 :");
    scanf("%f",&m2);

    printf("Subjects 3: ");
    gets(sub3);
    gets(sub3);
    printf(" Marks 3 :");
    scanf("%f",&m3);

    total = (m1+m2+m3);
    avg = total/3;
   

    if (avg >=90)
        Grade='A';
    else if (avg >= 80)
         Grade='B';
    else if (avg >= 70)
          Grade='C';
    else if (avg >= 60)
          Grade='D';
    else if (avg >= 40)
          Grade='E';
    else 
          Grade='F';
     
     
    fprintf(fp,"\nEnter Roll number   :%d",roll);
    fprintf(fp,"\nName                 :%s",studentName);
    fprintf(fp,"\nSubjects 1            :%s",sub1);
    fprintf(fp,"\nMarks                 :%.2f",m1);
    fprintf(fp,"\nSubjects 2            :%s",sub1);
    fprintf(fp,"\nMarks                 :%.2f",m2);
    fprintf(fp,"\nSubjects 3            :%s",sub1);
    fprintf(fp,"\nMarks                 :%.2f",m3);
    fprintf(fp,"\nTotal                 :%2.f",total);
    fprintf(fp,"\nAvg                   :%.2f",avg);
    fprintf(fp,"\nGrade %c\n            :",Grade);
    return 0;
}