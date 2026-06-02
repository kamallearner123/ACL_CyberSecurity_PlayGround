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

    // Use fread() to completely read the file into buffer and then use it from the buffer to perform operation
    // But the rpoblem is that, if file size if big it need huge buffer size to store all the contents which requires more memory
    // First use fstat() to know the size of the file and use that file size to declare buffer size

    fclose(fptr);

    return 0;
}