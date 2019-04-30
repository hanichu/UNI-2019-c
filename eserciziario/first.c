# include <stdio.h>



void sizes() {
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;
    long double g;

    printf ("\n\tchar is %lu byte\n", sizeof (a ));
    printf ("\tshort is %lu bytes\n", sizeof (b ));
    printf ("\tint is %lu bytes\n", sizeof (c ));
    printf ("\tlong is %lu bytes\n", sizeof (d ));
    printf ("\tfloat is %lu bytes\n", sizeof (e ));
    printf ("\tdouble is %lu bytes\n", sizeof (f ));
    printf ("\tlong double is %lu bytes\n\n", sizeof (g ));
}

int main(){
    sizes();
    return 0;
}