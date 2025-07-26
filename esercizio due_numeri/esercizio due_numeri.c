#include <stdio.h>

int main (void)

{
    int x, y; 
    printf ( "Inserisci due numeri: ");
    scanf ("%d%d", &x, &y);

    printf ("La somma è %d\n", x + y);
    printf ("La moltiplicazione è %d\n", x * y);
    printf ("La sottrazione è %d\n", x - y);
    printf ("La divisione è %d\n", x / y );
    printf ("Il resto è %d\n", x % y);

}