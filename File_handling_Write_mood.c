#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("text.txt", "w");

    if(file==NULL)
        printf("File dosen't exist");
    else{
        printf("File is open");
        fclose(file);
    }

    return 0;
}