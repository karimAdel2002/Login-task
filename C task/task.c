#include<stdio.h>
#include<string.h>
struct account
{
   char Email[20];
   char Password[20];
};

int main(){
    struct account acc1 , acc2 ;
    char checkEmail[20];
    char checkPassword[20] ;

    strcpy(acc1.Email, "Karim@yahoo.com");
    strcpy(acc1.Password , "1234") ;
    strcpy(acc2.Email, "Adel@yahoo.com");
    strcpy(acc2.Password , "123") ;
    
    printf("\n Enter your username : ");
    scanf("%s", &checkEmail);
    printf("\n Enter your password : ");
    scanf("%s", &checkPassword);
    if (strcmp(checkEmail,acc1.Email)==0 && strcmp(checkPassword,acc1.Password)==0){
        printf("\n Succesful login");
    }else if (strcmp(checkEmail,acc2.Email)==0 && strcmp(checkPassword,acc2.Password)==0)
    {
     printf("\n Succesful login");
    }else{
        printf("\n Unsuccessfil login");
    }
    
    //  printf("\n Succesful login");
    //  printf("\n Your username is : %s  ", acc1.Email);
    // printf("\n Your Password is : %d  ", acc1.Password);
    return 0;
}