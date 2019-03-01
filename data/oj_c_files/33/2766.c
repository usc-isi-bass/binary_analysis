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
    int n,m,i,j;
    char s[256];
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++){
        scanf("%s",&s);
        scanf("\n");
        m=strlen(s);
        for(j=0;j<m;j++){
            if(s[j]=='A'){
                s[j]='T';
                continue;
            }
            else if(s[j]=='T'){
                s[j]='A';
                continue;
            }
            else if(s[j]=='C'){
                s[j]='G';
                continue;
            }
            else if(s[j]=='G'){
                s[j]='C';
                continue;
            }
        }
        printf("%s",s);
        printf("\n");
    }
    return 0;
}
