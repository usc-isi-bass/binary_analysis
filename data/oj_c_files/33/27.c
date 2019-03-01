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
    int i,l,n;
    scanf("%d",&n);
    char c[2000],*p;
    for(i=0;i<n;i++){
        scanf("%s",c);
        l=strlen(c);
        p=c;
        for(p=c;p<c+l;p++){
             if(*p=='A'){printf("T");}
             if(*p=='T'){printf("A");}
             if(*p=='G'){printf("C");}
             if(*p=='C'){printf("G");}
        }
        printf("\n");
    }
	return 0;
}