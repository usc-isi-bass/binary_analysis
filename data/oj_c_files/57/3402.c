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
    char a[100];
    int n,i;
    scanf("%d",&n);
    for(;n>0;n--)
    {
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='e'&&a[i+1]=='r'&&a[i+2]=='\0'||a[i]=='l'&&a[i+1]=='y'&&a[i+2]=='\0'||a[i]=='i'&&a[i+1]=='n'&&a[i+2]=='g'&&a[i+3]=='\0')
            break;
            else
            printf("%c",a[i]);
        }
        printf("\n");
    }
}
