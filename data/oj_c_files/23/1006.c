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

int danci(char a[],char word[][100])
{
    int blank,i=0,j=0,n=0;
    while(a[i]!='\0')
    {
                     if(a[i]!=' '){word[n][j]=a[i];j=j+1;}
                     else if(a[i+1]!=' '&&a[i+1]!='\0'){n=n+1;j=0;}
                     i=i+1;
    }
    return (n+1);
}
int main()
{
    char a[100],word[100][100]={0};
    int n,i;
    gets(a);
    n=danci(a,word);
    for(i=n-1;i>0;i--)printf("%s ",word[i]);
    printf("%s",word[0]);
}
