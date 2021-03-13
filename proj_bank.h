#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void list_menu();
void count();
void bob(){                //redericting functions
char *u;
u="xdg-open https://www.bobibanking.com/";
system(u);
sleep(5);
list_menu();
}
void sbi(){
char *u;
u="xdg-open https://retail.onlinesbi.com/retail/login.htm";
system(u);
sleep(5);
list_menu();
}
void pnb(){
char *u;
u="xdg-open https://netpnb.com/";
system(u);
sleep(5);
list_menu();
}
void axis(){
char *u;
u="xdg-open https://www.axisbank.com/bank-smart/internet-banking/getting-started";
system(u);
}
void hdfc(){
char *u;
u="xdg-open https://netbanking.hdfcbank.com/netbanking/";
system(u);
sleep(5);
list_menu();
}
void github(){
char *u;
u="xdg-open https://github.com/mohitk30";
system(u);
sleep(5);
list_menu();
}

void list_menu(){                     //list menu function
 char cho[2];
 system("clear");
 printf("\n\n");
 count();
 time_cal();
 printf("\t\t------select choice no. form this list-------\n");
 printf("\n");
 printf("\t  1.Bank of Baroda \n");
 printf("\t  2.State Bank of India \n");
 printf("\t  3.Punjab National Bank\n");
  printf("\t  4.Axis Bank\n");
   printf("\t  5.HDFC Bank\n");
   printf("\t  6.DEVELOPER COMMUNITY  (GITHUB)\n");
   printf("\t  7.EXIT  (FOR EXIT)\n");
   printf("\n\n\tEnter choice no and hit enter :");
     scanf("%s",cho);
   if(strcmp(cho,"1")==0)
     bob();
     else if(strcmp(cho,"2")==0)
     sbi();
      else if(strcmp(cho,"3")==0)
      pnb();
       else if(strcmp(cho,"4")==0)
        axis();
         else if(strcmp(cho,"5")==0)
         hdfc();
         else if(strcmp(cho,"6")==0)
         github();
          else {
          sleep(2);
          printf("\n\tEXITING>>>>>\n");
          sleep(4);
          ext();
              }
              }
              