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

int main(){
    double r,s;
    int i;
    char a[501],b[501];
    char c,d;
    scanf("%lf%c%s%c%s",&r,&c,a,&d,b);
    s=0;
    if(strlen(a)!=strlen(b))
    {
                            printf("error");
    }
    else
    {
        for(i=0;i<strlen(a);i++)
        {
                                
                                if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
                               {
                                printf("error");
                                return 0;
                                }
                                if(a[i]==b[i])
                                {
                                              s++;
                                }
        }
        if(s/strlen(a)>=r)
        {
                          printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    
    return 0;
}
