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
    int n,i=0,j=0,k=0;
    int a[100];
    scanf("%d",&n);
    char word[10000];
    do
    {
        scanf("%s",&word[i]);
        i=strlen(word);
        word[i]=' ';
        j=j+1;
        i=i+1;
    }
    while(j<n);
    i=80;
    j=0;
    do
    {
        k=i;
        do
        {
            if(word[k]==' ')
            {
                a[j]=k;
                break;
            }
            k=k-1;
        }
        while(k>i-80);
        i=k+81;
        j=j+1;
    }
    while(word[i]!=0);
    i=0;
    j=0;
    do
    {
        if(i==a[j])
        {
            printf("\n");
            j=j+1;
        }
        else printf("%c",word[i]);
        i=i+1;
    }
    while(word[i+1]!=0);
}


 


