#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pass.h"
#include<unistd.h>
#include "wellc.h"
#include<time.h>
#include "proj_bank.h"
void menu();
void list_menu();
void must(){
printf("\n\tyou have sugessfully loged in\n\t");
sleep(2);
printf("\n\tTAKING YOU TO MAIN .....\n");
sleep(3);
menu();
}

int main(){


system("clear");
welc();
 user_test();

}
void menu(){
tc();

}
void count(){    //user count function
FILE *ptr;
ptr=fopen("user_count.txt","r");
if(ptr==0){
 printf("ERROR\n");
             }
      long int count;
      fscanf(ptr,"%ld",&count);
      
      fclose(ptr);
      
      count=count+1;
      FILE *ptr_n;
      ptr_n=fopen("user_count.txt","w");
      if(ptr_n==0)
      printf("ER\n");
      
      fprintf(ptr_n,"%ld",count);
      fclose(ptr_n);
      printf("Visitor[%ld]\n",count);
      
      }
      
 
