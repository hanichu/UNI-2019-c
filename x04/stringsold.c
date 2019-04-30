#include <stdio.h>
#include <string.h>

#define DIM 10

void confronto(){
    char str1[DIM], str2[DIM], uni[DIM*2];
    int i=0, uguali=0, tot1=0, tot2=0;

    printf("\n\tInserisci la prima stringa: ");
    scanf("%[^\n]%*c", str1);
    printf("\n\tInserisci la seconda stringa: ");
    scanf("%[^\n]%*c", str2);


    while((str1[i]!='\0'||str2[i]!='\0')&&!uguali){
        printf("\nCarattere numero: %d\tStringa 1 = %c\t\tStringa 2 = %c\n", i+1, str1[i], str2[i]);
        if (str1[i] != str2[i]) uguali = !uguali;
        i++;
    }

    if (!uguali) printf("\nSon uguali\n\n");
    else printf("\nNon sono uguali\n");

    for(i=0; (str1[i]!='\0'||str2[i]!='\0')&&(str1[i]>31||str2[i]>31); i++){
        printf("\n%d",i+1);

        if(str1[i]>31&&str1[i]<127){
            tot1 += str1[i];
            uni[i] = str1[i];
            printf("\tStringa 1 = %d (%c)", str1[i],  str1[i]);
        }
        else{
            printf("\tStringa 1 = 0 ( )");
        }
        if(str2[i]>31&&str2[i]<127){
            tot2 += str2[i];

            printf("\t\tStringa 2 = %d (%c)\n", str2[i], str2[i]);
        }
        else{
            printf("\t\tStringa 2 = 0 ( )\n");
        }
    }


    printf("\nTotale:\tStringa 1 = %d\t\t\tStringa 2 = %d\n", tot1, tot2);
    if(tot1>tot2){
        printf("\n\tE' più pesante la prima stringa\n\n");
    }
    else if(tot1<tot2){
        printf("\n\tE' più pesante la seconda stringa stringa\n\n");
    }
    else{
        printf("\n\tStesso peso\n\n");
    }

    strcat(uni, str2);/*Implementa la funzione a parte*/


    printf("\tLe due stringhe unite: %s\n\n", uni);
}

int main(){
    confronto();
    return 0;
}
