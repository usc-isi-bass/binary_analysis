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
    int n,i,j=0,k=0,a,e,f,b;
    char id[N][11],ido[N][11],idy[N][11],m[11];
    int nl[N],nlo[N];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d",id[i],&nl[i]);
        if(nl[i]<60)
        {
            strcpy(idy[j],id[i]);
            j++;
        }
        if(nl[i]>=60)
        {
            nlo[k]=nl[i];
            strcpy(ido[k],id[i]) ;
            k++;
        }
    }
    for(a=1;a<=k;a++)
    {
        for(b=0;b<k-a;b++)
        {
            if(nlo[b]<nlo[b+1])
            {
                e=nlo[b+1];
                nlo[b+1]=nlo[b];
                nlo[b]=e;
                strcpy(m,ido[b+1]);
                strcpy(ido[b+1],ido[b]);
                strcpy(ido[b],m);
            }
        }
    }
    for(f=0;f<k;f++)
    {
        puts(ido[f]);
    }
    for(f=0;f<j;f++)
    {
        puts(idy[f]);
    }
    return 0;
}