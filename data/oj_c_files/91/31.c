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
        char cc[101],dd[101],e;
        char *c,*d;  
        int i=0;
        gets(cc);
    
        d=dd;
        c=cc;
        for(;*c!='\0';c++,d++){
        *d=*c+*(c+1);                      
        }
        
        e=*(c-1);
        *d='\0';
        c=cc;
        *(d-1)=*c+e;
        
        d=dd;
        printf("%s",d);
        return 0;
    }
