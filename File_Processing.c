#include<stdio.h>
#include<string.h>
#define SIZE 1000

int main(){

    FILE *fp;
    char ch, text[170], pattern[20];
    int tlen, plen;

    printf("Enter a search string: ");
    scanf("%[^\n]",pattern);

    fp = fopen("./modules.txt","r");

    if(fp == NULL){
        printf("\n Error!!! Can't open the file.\n");
        return 0;
    }

    
}