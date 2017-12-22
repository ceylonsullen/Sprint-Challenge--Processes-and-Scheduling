#include <stdio.h>
#include <time.h>

int main(void)
{
    int i;
    double time1, time2, timedif, timedif2;
    time1 = (double) clock();            /* get initial time */
    for( i = 0; i < 1000; i++ ) {
        printf( "." );
    }
    timedif = ( ((double) clock()) / CLOCKS_PER_SEC) - time1;
    printf("The elapsed time is %f seconds\n", timedif);

    time2 = (double) clock();            /* get initial time */
    for( i = 0; i < 1000; i++ ) {
        write(1, ".", 36);
    }
    timedif2 = ( ((double) clock()) / CLOCKS_PER_SEC) - time2;
    printf("%f", timedif2);
    return 0;
}