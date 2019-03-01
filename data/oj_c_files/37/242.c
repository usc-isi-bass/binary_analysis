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
    int hash[26],flag;
    int t,i,j;
    char a[10001];
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; ++i)
    {
        gets(a);
        for(j=0; j<26; ++j)
            hash[j]=0;
        for(j=0; a[j] ; ++j)
            if(a[j]!='\n')  
                ++hash[a[j]-'a'];
        flag=1;
        for(j=0; a[j] ; ++j)
            if(hash[a[j] - 'a'] == 1)
            {
                printf("%c\n",a[j]);
                flag=0;
                break;
            }
        if(flag) printf("no\n");
    }
    
    getchar();  getchar();
    return 0;
}
