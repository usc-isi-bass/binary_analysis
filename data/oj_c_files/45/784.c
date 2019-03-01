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

void main()
{
    char s[100],w[100];
    int ns,nw,i=0,j=0,sum=0,z;
    scanf("%s%s",&s,&w);
    ns=strlen(s);
    nw=strlen(w);
    while(i<ns&&j<nw)
    {
        if(s[i]==w[j])
        {
        sum++;
        i++;j++;
        }
        else
        {sum=0;i=0;j++;}
    }
    if(sum==ns)
    {
    z=j-sum;
    printf("%d\n",z);}
}

            





