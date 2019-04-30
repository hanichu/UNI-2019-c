#include <stdio.h>
#include <string.h>

#define DIM 100

int compare(char str1[DIM], char str2[DIM]){
    int i=0, uguali=0;

    while((str1[i]!='\0'||str2[i]!='\0')&&!uguali){
        printf("\nCarattere numero: %d\tStringa 1 = %c\tStringa 2 = %c\n", i+1, str1[i], str2[i]);
        if (str1[i] != str2[i]) uguali = !uguali;
        else i++;
    }

    if(!uguali){
        printf("\vSon uguali\n\n");
        return 0;
    }
    else{
        printf("\vNon sono uguali\v\nStringa 1 = %c (%d) & Stringa 2 = %c (%d)\n\n", str1[i],str1[i], str2[i], str2[i]);
        return (str1[i] - str2[i]);
    }
}


char* concat(char str1[DIM], char str2[DIM]){
    int i, c;

    for(c=0; str1[c]!='\0'; c++);
    for(i=0; str2[i]!='\0'; i++, c++) str1[c]=str2[i];
    str1[c]='\0';

    return str1;
}



int main(){
    char str1[DIM], str2[DIM];
    int res;

    printf("\n\tInserisci la prima stringa: ");
    scanf("%[^\n]%*c", str1);
    printf("\n\tInserisci la seconda stringa: ");
    scanf("%[^\n]%*c", str2);


    printf("\n\n\t\t\tCompare:\n");
    res = compare(str1, str2);
    printf("Risultato: %d\n", res);
    printf("Risultato originale: %d\n\n", strcmp(str1, str2));
    if(res>0)
        printf("E' più grande la prima\n\n");
    else if(res<0)
        printf("E' più grande la seconda\n\n");


    printf("\n\n\t\t\tConcat:\n\n");
    printf("Risultato ottenuto: %s\n\n", concat(str1, str2));



    return 0;
}
