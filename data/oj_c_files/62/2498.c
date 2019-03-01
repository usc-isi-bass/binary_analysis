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
    int a=1;
    char t[101],s[101];
    gets(s);
	t[0]=s[0];
    for(int i=1;s[i]!='\0';i++){
        if(s[i]!=' '){
           t[a]=s[i];
           a++;
        }
        else if(s[i-1]==' ')continue;
        else if(s[i-1]!=' '){
           t[a]=s[i];
           a++;
        }
   }
   t[a]='\0';
   printf("%s",t);
   return 0;
}