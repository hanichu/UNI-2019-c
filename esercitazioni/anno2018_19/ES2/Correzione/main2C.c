#include <stdio.h>
#include "es2C.h"

int checkRiga_XYZ(char s[], char M[RIGHE][COLONNE], int r, int c) {
    int i = 0;
    while ((s[i] != '\0') && (c + i < COLONNE)) {
        if (s[i] != M[r][c+i]) {
            return 0;
        }
        ++i;
    }
    return (s[i] == '\0') ? 1 : 0;
}

int checkColonna_XYZ(char s[], char M[RIGHE][COLONNE], int r, int c) {
    int i = 0;
    while ((s[i] != '\0') && (r + i < RIGHE)) {
        if (s[i] != M[r+i][c]) {
            return 0;
        }
        ++i;
    }
    return (s[i] == '\0') ? 1 : 0;
}

int checkDiagonale_XYZ(char s[], char M[RIGHE][COLONNE], int r, int c) {
    int i = 0;
    while ((s[i] != '\0') && (r + i < RIGHE) && (c + i < COLONNE)) {
        if (s[i] != M[r+i][c+i]) {
            return 0;
        }
        ++i;
    }
    return (s[i] == '\0') ? 1 : 0;
}

int contaOccorrenze_XYZ(char s[], char M[RIGHE][COLONNE]) {
    int r, c;
    int ret = 0;
    for (r = 0; r < RIGHE; ++r) {
        for (c = 0; c < COLONNE; ++c) {
            ret += checkRiga_XYZ(s, M, r, c) + checkColonna_XYZ(s, M, r, c) 
                + checkDiagonale_XYZ(s, M, r, c);
        }
    }
    return ret;
}

int errori(char s[], char M[RIGHE][COLONNE]) {
    int risultato = contaOccorrenze(s,M);
    int risultato_atteso = contaOccorrenze_XYZ(s,M);
    if (risultato != risultato_atteso) {
      printf("ERRORE: \ncontaOccorrenze(%s,M)=%d\nrisultato atteso = %d\n\n", s, risultato, risultato_atteso);
      return 1;
    }
    return 0;
}

int main() {
	int i =0;
	int j =0;

	char text_matrix[RIGHE][COLONNE] = {{'A','A','A','S','R','F','V','C','F','C','A'},
										{'A','A','A','D','F','C','C','C','U','I','A'},
										{'A','A','A','A','A','V','F','V','F','I','I'},
										{'B','U','A','A','A','G','C','H','G','C','J'},
										{'V','I','A','A','A','A','A','H','H','A','A'},
										{'C','J','U','J','A','A','A','H','H','H','H'},
										{'F','B','J','G','A','A','A','T','T','T','T'},
										{'C','V','U','N','O','U','N','U','T','T','T'},
										{'A','V','P','N','W','N','U','N','A','A','A'},
										{'B','D','U','N','O','U','N','U','A','A','A'},
										{'B','F','L','N','S','N','U','N','A','A','A'},
										{'J','K','B','C','O','U','N','U','Z','X','I'}};

	char s1[] = "FCVGA";
	char s2[] = "VCFCA";
	char s3[] = "TT";
	char s4[] = "AA";
	char s5[] = "A";
	char s6[] = "I";
	char s7[] = "UNU";
	char s8[] = "HHH";
	char s9[] = "UIA";
	char s10[] = "OSO";
	char s11[] = "AATT";
	char s12[] = "GON";
	char s13[] = "AAASRFVCFCA";
	char s14[] = "AABVCFCABBJ";
	char s15[] = "AAAAAAAUAAA";
	char s16[] = "AAASRFVCFCAFFFF";
	char s17[] = "AABVCFCABBJFFFF";
	char s18[] = "AAAAAAAUAAAFFFF";

	int flag = 1;

	for (i=0;i<RIGHE;i++) {
		for (j=0;j<COLONNE;j++)
			printf("%c ",text_matrix[i][j]);
		printf("\n");
	}

	flag = errori(s1,text_matrix) + errori(s2,text_matrix) + errori(s3,text_matrix)
	+ errori(s4,text_matrix)
	+ errori(s7,text_matrix) + errori(s8,text_matrix) + errori(s9,text_matrix)
	+ errori(s10,text_matrix) + errori(s11,text_matrix) + errori(s12,text_matrix)
	+ errori(s13,text_matrix) + errori(s14,text_matrix) + errori(s15,text_matrix)
	+ errori(s16,text_matrix) + errori(s17,text_matrix) + errori(s18,text_matrix);

	/* non considerate errori ma testate comunque */
	errori(s5,text_matrix);
	errori(s6,text_matrix);

	if(flag) {
		printf("ERRORE:\n");
		return 0;
	} else {
		printf("OK:\n");
		return 1;
	}
}