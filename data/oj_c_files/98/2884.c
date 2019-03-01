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
    int n;
    scanf("%d",&n);
    char word[2000][1000];
    for(int i=0;i<n;i++)
    {
        scanf("%s",word[i]);    
    }
    int start=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=count+strlen(word[i]);
        if(count+i-start>80)
        {
            for(int j=start;j<=i-2;j++)
            printf("%s ",word[j]);
            printf("%s\n",word[i-1]);
            start=i;  
            i=i-1;
            count=0;       
        }
        if(i==n-1&&count+i-start<80)
        {
            for(int j=start;j<=i-1;j++)
            printf("%s ",word[j]);
            printf("%s",word[i]);                       
        }    
    }
    return 0;
}