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
    char s1[101];
    gets(s1);
    int i,t;
    char s2[101];
    for(i=0;i<101;i++){
                       if(s1[i+2]!='\0'){
                                         s2[i]=s1[i]+s1[i+1];
                                         }
                       else{
                            t=i;
                            s2[i]=s1[i]+s1[i+1];
                            break;
                            }
                       }
    s2[t+1]=s1[t+1]+s1[0];
    for(i=0;i<t+2;i++){
                       printf("%c",s2[i]);
                       }   
  
    return 0;
    }