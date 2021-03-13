
#include<unistd.h>
void check_u(char *p,long int password);
void creat();
void must();
   
void user(){                    //check function

  char user_n[30];
  long int password;
  
  printf("\n\tEnter user name if you are having otherwise press 0\n\t=>");
  scanf("%s",user_n);
  if(strcmp(user_n,"0")==0)
      creat();
  else
  printf("\tEnter password:");
  scanf("%ld",&password);
  check_u(user_n,password);
}
void creat(){               //create user function
  system("clear");
  char u_name[30],u_n[30];
  long int pas;
  printf("\tCreate your account\n\t");
   printf("\tEnter user name:");
   scanf("%s",u_name);
   
  printf("\tEnter password:");
  scanf("%ld",&pas);
  
  FILE *ptr;
  ptr=fopen("passw.txt","a+");
  if(ptr==0){
     printf("Error\n");
               }
 fprintf(ptr,"%s %ld",u_name,pas);
 fclose(ptr);


 system("./a.out");
}
 void check_u(char *p,long int password){        //password check function
 int i=0;
 char n[30],c_user[30];
   for(i=0;i<30;++i){
   n[i]=p[i];
   }
  
   FILE *ptr;
   ptr=fopen("passw.txt","r");
   if(ptr==0)
   printf("Error\n");
   
   long int c_pass;
   int match=0;
   while(fscanf(ptr,"%s %ld",c_user,&c_pass)!=EOF){
       if((password==c_pass) && (strcmp(c_user,n)==0)){
          match=1;
        
          }
          }
           fclose(ptr);
          if(match==0){
          
         
          printf("\tWrong user name or password\n");
          
          printf("\nYou can also create account\n");
         sleep(3);
          user();
          }
          else
          must();
          
          }

   
   