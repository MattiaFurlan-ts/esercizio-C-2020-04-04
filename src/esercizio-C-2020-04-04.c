#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char ch;
    int current = 0, total = 0, rows = 0;
    while ((ch = getchar ()) != EOF)
    {
            if (ch == '\n')
            {
                rows++;
                total += current;
                printf ("Lunghezza riga: %d, media parziale: %.1f\n", current, (float) total / rows);
                current = 0;
            }
            else
                current++;
    }
    return 0;
}
