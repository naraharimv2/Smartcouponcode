#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

int main()
{
    srand(time(0));
    system("cls");
    int i;
    char c,s[100],s1[100];
    char sc[100] = "doctor consultation",sc1[100]="fever",sc2[100]="cold and cough",sc3[100]="covid infection",sc4[100]="body ache";
    printf("\n\t\t\t\t\t");
    Sleep(250);
    printf("||* SMART ");
    Sleep(250);
    printf("COUPON ");
    Sleep(250);
    printf("CODE ");
    Sleep(250);
    printf("GENERATION *||");
    printf("\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<25 ; i++)
    {
        Sleep(40);
        printf("-");
    }
    printf("\n\t\t\t\t\t\tCustomer Data");
    printf("\n\t\t\t\t\t");
    for(int i=0; i<25 ; i++)
    {
            Sleep(40);
            printf("-");
    }
    printf("\n\n\nWhats the payment for: ");
    scanf("%[^\n]%*c", &s);
    if(!strcmp(s,sc))
    {
       printf("Enter the Disease: ");
       scanf("%[^\n]%*c", &s1);
       if(!strcmp(s1,sc1))
       {
           int ch;
           printf("Please upload your prescription of consent doctor(y/n): ");
           scanf("%c",&c);
           if(c == 'y'){
           printf("1. 25 percent off on all Paracetmol with prior prescription\n");
           printf("2. 15 percent off blood tests and further medical checkups\n");
           printf("Enter your best choice: ");
           scanf("%d",&ch);
           printf("Generating Coupon code");
           for(int i=0; i<8 ; i++)
           {
             Sleep(700);
             printf(".");
           }
           switch (ch)
           {
           case 1:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   break;
            case 2:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   break;
           default:
               break;
           }
           }
           else{
               printf("Please upload prescription to avail discounts\n");
           }
       }
       else if(!strcmp(s1,sc3))
       {
           int ch;
           printf("Please upload your prescription of consent doctor(y/n): ");
           scanf("%c",&c);
           if(c == 'y'){
           printf("1. Upto 50 percent off on RTPCR test\n");
           printf("2. Upto Rs.100 off on Advanced OXIMETERS\n");
           printf("Enter your best choice: ");
           scanf("%d",&ch);
           printf("Generating Coupon code");
           for(int i=0; i<8 ; i++)
           {
             Sleep(700);
             printf(".");
           }
           switch (ch)
           {
           case 1:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   printf("\nHeyy!!! Guess what??");
                   Sleep(5000);
                   printf("\nYou are rewarded with special filtrated efficient limited edition 'PREMIUM N95 MASKS'");
                   break;
            case 2:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   break;
           default:
               break;
           }
           }
           else{
               printf("Please upload prescription to avail discounts\n");
           }
       }
       else if(!strcmp(s1,sc2))
       {
           int ch;
           printf("Please upload your prescription of consent doctor(y/n): ");
           scanf("%c",&c);
           if(c == 'y'){
           printf("1. Up to 25 percent off on Otrivin nasal sprays\n");
           printf("2. Up to 20 percent off on Cough syrups and Immunity boosters\n");
           printf("Enter your best choice: ");
           scanf("%d",&ch);
           printf("Generating Coupon code");
           for(int i=0; i<8 ; i++)
           {
             Sleep(700);
             printf(".");
           }
           switch (ch)
           {
           case 1:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   break;
            case 2:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   break;
           default:
               break;
           }
       }
           else{
               printf("Please upload prescription to avail discounts\n");
           }
       }
       else if(!strcmp(s1,sc4))
       {
           int ch;
           printf("Please upload your prescription of consent doctor(y/n): ");
           scanf("%c",&c);
           if(c == 'y'){
           printf("1. Buy 1 Get 1 Free Pain releiving sprays\n");
           printf("2. Up to 18 percent off on CT & MRI scans\n");
           printf("Enter your best choice: ");
           scanf("%d",&ch);
           printf("Generating Coupon code");
           for(int i=0; i<8 ; i++)
           {
             Sleep(700);
             printf(".");
           }
           switch (ch)
           {
           case 1:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   break;
            case 2:
                   printf("\nCoupon code: ");
                   for(i=0;i<8;i++)
                   {
                     int num = rand()%10;
                     printf("%d",num);
                   }
                   break;
           default:
               break;
           }
       }
           else{
               printf("Please upload prescription to avail discounts\n");
           }
       }
    }
}
