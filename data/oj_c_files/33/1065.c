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


char convert[100];

int main(){
    int N,l,i,tt;
    char a[10000];
    
    convert['A'] = 'T';
    convert['T'] = 'A';
    convert['G'] = 'C';
    convert['C'] = 'G';
    
    scanf("%d",&N);
    for (tt = 1; tt <=N; tt++){
          scanf("%s",a);
          l = strlen(a);
          for (i=0;i<l;i++) printf("%c",convert[a[i]]);
          printf("\n");
    }

    return 0;
}
