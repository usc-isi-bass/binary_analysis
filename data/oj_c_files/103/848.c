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

//??(12-5) ?????? ??? 20121231

char s[1010];

int main()
{
    scanf("%s",s);
    int i=0,d=1;

    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z') s[i]-=32;
        if(s[i+1]!=s[i]&&s[i+1]!=s[i]+32)
        {
            printf("(%c,%d)",s[i],d);
            d=1;
            i++;
            continue;
        }
        d++,i++;
    }
    return 0;
}
