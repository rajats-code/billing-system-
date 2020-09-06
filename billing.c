#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20],c[20],d[20];
int price1,price2,price3,price4 ,gst=0, total=0;
//clrscr();
printf("\n Billing Software for SHREEMAAN DRESSAGE by SHUDHIR SINGH \n");
printf("\n===============================================\n");
printf("\nEnter the name of the items:");
scanf("%s %s %s %s",&a,&b,&c,&d);
printf("\nEnter the price of the item:");
scanf("%d %d %d %d",&price1,&price2,&price3,&price4);
int gst1 = ((price1/100)*18);
int gst2 = ((price2/100)*18);
int gst3 = ((price3/100)*18);
int gst4 = ((price4/100)*18);
int total1= price1+gst1;
int total2= price2+gst2;
int total3= price3+gst3;
int total4= price4+gst4;
printf("\n\n SHREEMAAN DRESSAGE \n\n");
printf("\n========================\n");
printf("\nItems	 price	 gst   total\n");
printf("\n%s	%d	%d	%d\n",a,price1,gst1,total1);
printf("\n%s	%d	%d	%d\n",b,price2,gst2,total2);
printf("\n%s	%d	%d	%d\n",c,price3,gst3,total3);
printf("\n%s	%d	%d	%d\n",d,price4,gst4,total4);
printf("\n========================\n");

int SUM_TOTAL = (total1+total2+total3+total4);
printf("TOTAL AMOUNT IS:%d",SUM_TOTAL);

printf("\n========================\n");
printf("\nThank You! Do Visit Again\n");

getch();
}


