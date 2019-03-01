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

main()
{
    char word[41];
    int sum=0,n,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        scanf("%s",word);
        if((sum+strlen(word)+1<=80)&&n!=t)
        {
            printf(" ");
            sum++;
        }
        else
        {
            printf("\n");sum=0;
        }
        sum=sum+strlen(word);
        printf("%s",word);
        memset(word,0,sizeof(word));
        n--;
    }
}
