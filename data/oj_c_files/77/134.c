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
    int i,j,p;
    char a[100],m,n;
    scanf("%s", a);
    p=strlen(a);
    m=a[0];
    for(i=1;i<=p/2;i++) if(a[i]!=m) {n=a[i]; break;}
    for(i=i;i<=p-1;i++) if(a[i]==n) for(j=i;j>=0;j--) if(a[j]==m)
    {
    printf("%d %d\n", j, i);
    a[j]=' ';
    break;
    }
    return 0;
}
