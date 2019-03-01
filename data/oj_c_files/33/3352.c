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
    char a[1000];
    int n,i;
    scanf("%d",&n);
    for(;n>0;n--)
    {
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='A')
            printf("T");
            if(a[i]=='T')
            printf("A");
            if(a[i]=='C')
            printf("G");
            if(a[i]=='G')
            printf("C");
        }
        printf("\n");
    }
}
