#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt","w");
    char a[100];

    fputc('m',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);

    printf("enter name");
    scanf("%s",&a);

    fprintf(fptr,"%s", a);

    fclose(fptr);
    return 0;
}