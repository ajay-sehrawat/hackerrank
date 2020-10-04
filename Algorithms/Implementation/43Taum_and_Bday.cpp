#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int test_case;
    unsigned long int black, white, cblack, cwhite, conv, price;
    scanf("%d",&test_case);
    int i = 0;

    //While the test cases keep coming run while loop
    while ( i < test_case )
    {
        scanf("%lu%lu%lu%lu%lu",&black,&white,&cblack,&cwhite,&conv );
        //Simple maths of who is greater
        if ( (cwhite+conv) < cblack ) {
            price = white*cwhite + black*(cwhite+conv);
            printf("%lu\n", price);
        }
        else if ( (cblack+conv) < cwhite ) {
            price = black*cblack + white*(cblack+conv);
            printf("%lu\n", price);
        }
        else {
            price = black*cblack + white*cwhite;
            printf("%lu\n", price);
        }
        i++;
    }
}

