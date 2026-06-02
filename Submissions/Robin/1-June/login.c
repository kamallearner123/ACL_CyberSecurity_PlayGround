// 1. Simple Login Program
// Write a C program that asks for a password and checks if it matches admin123. If correct, print "Access Granted". Allow 3 attempts.


#include<stdio.h>
#include<string.h>

int main(){
    char original_pass[] = "admin123", user_pass[9];
    int flag=2;
    while(flag>=0){
        printf("Enter password to login: ");
        fgets(user_pass, 9, stdin);      //check fgets size and array size
        
        //printf("%s",user_pass);
        //user_pass[strcspn(user_pass, "\n")] = '\0';
        //printf("%s",user_pass);
        
        if(strcmp(user_pass ,original_pass) == 0){
            printf("### Login Successful ###");
            return 0;            
        }else{
            printf("---Incorrect password---\n\n");
            printf("Remaining attempt(s): %d\n",flag);
            flag--;
        }
    }
    return 1;
}