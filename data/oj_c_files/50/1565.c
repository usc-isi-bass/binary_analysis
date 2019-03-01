#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{

    //??????
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    //startDay?1?1??????
    //xMonthThirteenth????13??????????
    //whatDay????13??????
    int startDay, xMonthThirteenth = 13;
    int whatDay, i;

    scanf("%d", &startDay);
    xMonthThirteenth += (startDay - 1); 
    for(i = 0; i < 12; i ++)
    {
        whatDay = xMonthThirteenth % 7;
        if(whatDay == 5)
            printf("%d\n", i + 1);
        xMonthThirteenth += days[i];
    }

	return 0;
}
