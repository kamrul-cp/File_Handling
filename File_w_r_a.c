#include<stdio.h>
int main(){
    FILE *file;
    char name[40] = " Department of CSE";
    int length = strlen(name);

    file= fopen("test.txt", "a");

    if(file == NULL)
        printf("File doesn't exist");
    else{
        printf("File is open\n");

    for(int i=0; i<length; i++){
        fputc(name[i], file);
    }
    printf("File open successefully");
    fclose(file);
    }
    return 0;
}
