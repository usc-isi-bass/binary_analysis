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
    int i,j,c,d,e=0,t=0;
    double n,m;
    char a[501],b[500];
    scanf("%lf",&n);
    scanf("%s",a);
    scanf("%s",b);
    c=strlen(a);
    d=strlen(b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')
        {
            t++;
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')
        {
            t++;
        }
    }
    if(t>0)
    {
        printf("error");
    }
    else if(t==0)
    {
        if(c==d)
        {             
            for(i=0;a[i]!='\0';i++)
            {
                if(a[i]==b[i])e++;
            }
            m=e*1.0/c;
            if(m>n){
                printf("yes");
            }else{
               printf("no");
           }
        }
        else
        {
            printf("error");
        }
    }
    return 0;
}
