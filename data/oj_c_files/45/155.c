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
    int q;
    char s[50];
    char w[50];
    scanf ("%s",s);
    scanf ("%s",w);
    int i,j,p;
    i=strlen(s);
    j=strlen(w);
    if(i==1)
    {
        for (p=0;p<=j-i+1;p++)//w//
        {
                         if(w[p]==s[0])
                         printf("%d",p);
        }
    }
    else
    {
         for (p=0;p<=j-i+1;p++)
         if(w[p]==s[0]&&w[p+i-1]==s[i-1]){
                         printf("%d",p);

                         exit(0);}
        }
        
    return 0;
    
    } 
