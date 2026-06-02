// 3. File Reader Program
// Write a program that takes a filename from the user and prints its content.

#include<stdio.h>

int main(){
    FILE *fptr = fopen("file.txt","r");

    char buffer[100];
    while(fgets(buffer, sizeof(buffer), fptr) != NULL){
        fputs(buffer, stdout);
    }

    // This above while loop reads one line, adds it to the buffer and prints it and then continues to read the 2nd line.
    // Is there any other way by which all the lines from the file are 
    // coppied into the buffer at once and then prints completely from the buffer.

    fclose(fptr);

    return 0;
}