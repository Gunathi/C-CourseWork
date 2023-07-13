#include<stdio.h>
#include<string.h>
#define SIZE 1000

int textLength(char*);

//Get length of each text line
int textLength(char* array){
    int x = 0;
    while(array[x] != '\0'){
        x++;
    }
    return x;
}

int main(){

    FILE *fp;
    char ch, text[170], pattern[20];
    int tlen, plen;

    printf("Enter a search string: ");
    scanf("%[^\n]",pattern);

    fp = fopen("./modules.txt","r"); //Import text file

    if(fp == NULL){
        printf("\n Error!!! Can't open the file.\n");
        return 0;
    }

    plen = textLength(pattern);
    
    

}