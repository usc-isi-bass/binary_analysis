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
char s[120],w[120];
gets(s);
for (int j=0;j<strlen(s);j++){
    if(j!=(strlen(s)-1)){
          w[j]=s[j]+s[j+1];
    }
    else {
          w[j]=s[j]+s[0];
    }
}
for (int i=0;i<strlen(s);i++){
     printf("%c",w[i]);
}
return 0;
}