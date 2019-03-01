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
int n,i,j,k,l[50];
char a[52][33],b[52][33];
scanf("%d",&n);
for(i=0;i<=n;i++)
    {
     gets(a[i]);
     l[i]=strlen(a[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(a[i][l[i]-2]=='e'&&a[i][l[i]-1]=='r')   a[i][l[i]-2]='\0';
        if(a[i][l[i]-2]=='l'&&a[i][l[i]-1]=='y')   a[i][l[i]-2]='\0';
        if(a[i][l[i]-3]=='i'&&a[i][l[i]-2]=='n'&&a[i][l[i]-1]=='g')   a[i][l[i]-3]='\0';
        printf("%s\n",a[i]);

    }


}

