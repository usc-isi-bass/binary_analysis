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
    char a[100];
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        if(a[strlen(a)-1]=='r'&&a[strlen(a)-2]=='e'){a[strlen(a)-2]='\0';}
        if(a[strlen(a)-1]=='g'&&a[strlen(a)-2]=='n'&&a[strlen(a)-3]=='i'){a[strlen(a)-3]='\0';}
        if(a[strlen(a)-1]=='y'&&a[strlen(a)-2]=='l'){a[strlen(a)-2]='\0';}
        printf("%s\n",a);
        for(j=0;j<strlen(a);j++)
        {
            a[j]='\0';
        }
    }
    return 0;
}