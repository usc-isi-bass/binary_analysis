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
    int n,l,i,j,m,a[1000]={0};
    char ch[1000]={0},str[1000][1000]={0};
    scanf("%d",&n);
    getchar();
    gets(ch);
    l=strlen(ch);
    for(i=0;i<l-n+1;i++)
    {
        m=0;
        for(j=i;j<i+n;j++)
        {
            str[i][m]=ch[j];
            m++;
        }
    }
    for(i=0;i<l-n;i++)
    {
        a[i]=1;
        for(j=i+1;j<l-n+1;j++)
        {
            if(strcmp(str[i],str[j])==0)
            a[i]=a[i]+1;
        }
    }
    for(j=0,i=0;i<l-n;i++)
    {
        if(a[i]>j) j=a[i];
    }
    if(j==1)
    printf("NO");
    else
    {printf("%d\n",j);
    for(i=0;i<l-n;i++)
    {
        if(a[i]==j) 
        puts(str[i]);
    }}
    return 0;
}
