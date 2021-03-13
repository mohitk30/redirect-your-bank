#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<string.h>
void ext();
void menu();
void list_menu();
void welc(void){
   printf("\t ##      ##  ######  ##      ####    #####   ##     ##  #####\n");
   printf("\t ##  ##  ##  ##      ##     #       #     #  ## # # ##  ##   \n");
   printf("\t ##  ##  ##  ####    ##     #       #     #  ##  #  ##  ###  \n");
   printf("\t ##  ##  ##  ##      ##     #       #     #  ##     ##  ##   \n");
   printf("\t ####  ####  ######  ######  ####    #####   ##     ##  #####\n");
   
    }
    void user_test(){       //otp function
    FILE *ptr;
    ptr=fopen("otp.txt","w");
    if(ptr==0){
    printf("ERROR\n");
           }
           srand(time(0));
           int p=rand();
           int c;
           fprintf(ptr,"OTP is %d\n",p/1000);
           fclose(ptr);
           system("export_file otp.txt");
           printf("\n\tENTER OTP from text file otp.txt:");
           scanf("%d",&c);
           if (c==p/1000)
           user();
           else
           system("./a.out");
           
           }
           void tc(){                       //t and  c function
            system("clear");
            char yo[2];
            printf("\n\n\n");
            printf("\t*Tnc\n\n");
            printf("\tWe will not make your information public  \n");
            printf("\tWe never ask about your personal information\n");
            printf("\tsorry for any inconvinence \n");
            printf("\tWhile redericting we don't share your identity\n"); 
            printf("\n\tAgree and Want to continue(y/n):");
            scanf("%s",yo);
            if((strcmp(yo,"y")!=0) && (strcmp(yo,"Y")!=0))
            ext();
            else{
            sleep(5);
            list_menu();
            }
            }
            void time_cal(){        // log in time function
            FILE *ptr;
            ptr=fopen("last_log_time.txt","r");
            if(ptr==0){
            printf("ERRRRR\n");
            }
            char buf[50];
            fscanf(ptr,"%s",buf);
            printf("\n                         		 Last login:%s\n",buf);
            fclose(ptr);
            
            FILE *ptr_n;
            ptr_n=fopen("last_log_time.txt","w");
            if(ptr_n==0){
            printf("ERRRRRR\n");
            }
            
            time_t log;
            time(&log);
            char co[30];
            strcpy(co,ctime(&log));
            fprintf(ptr_n,"%s",co);
            fclose(ptr_n);
            
            }
            
            void ext(){                   //thanku function
            printf("##########################################################\n\n");
            printf("#######################  THANK YOU #######################\n\n");
            printf("##########################################################\n\n");
            }
            
            
            
            
                
