#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    for(char c='a';c<='z';c++)
    {
        if(c != 'q' && c != 'e')
            putchar(c);    
    }
    printf("\n");
	return (0);
}
