#include<stdio.h>
#include<string.h>
#define SIZE 1000

int textLength(char*);
char *setCase(char *txt);

//Get length of each text line
int textLength(char* array){
    int x = 0;
    while(array[x] != '\0'){
        x++;
    }
    return x;
}

char *setCase(char txt[]){
    for(int i = 0; i < strlen(txt) i++){
        if(txt[i] >= 65 && txt[i] <= 90){
            txt[i] = txt[i] + 32;
        }
    }
    return txt;
}

int searchKMP(char *T, char *P){

    int m = strlen(P), n = strlen(T), i = 0, j = 0;
    int* PSuffix = preProcess(P, strlen(p));

    found = 0; 

    while(i < n){
        if(P[j] == T[i]){
            j++;
            i++;
        }

        if(j == m){
            found = 1;
            j = PSuffix[j - 1];
        }else if(j < n && P[j] != [i]){
            if(j != 0){
                j = PSuffix[j - 1];
            }else {
                i++;
            }
        }
    }
    return found;
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
    
    printf("\n Search Result : \n");

    while(ch != EOF){

        fscanf(fp, "%[^\n]", text);
        tlen = textLength(text);

        strcpy(T, text); //Copy the string in text variable to variable T
        strcpy(P, pattern); //Copy the string in pattern variable to variable P

        setCase(T);
        setCase(P);

        searchKMP(T, P);

        if(found == 1){
            comp++;
            printf(" * %s\n", text);
        }

        ch = getc(fp);
    }

}
