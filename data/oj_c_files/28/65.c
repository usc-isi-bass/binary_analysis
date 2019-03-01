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

void main()
{
int n,m,a=0,i;
char str[3000];
gets(str);
n=strlen(str);
str[n]='\0';
for(i=0;;i++){
  if(str[i]==' '||str[i]=='\0') {m=i;printf("%d",m);break;}
  else continue;
  }
for(i=m+1;i<n;i++){
  if(str[i]!=' ') a++;
  if((str[i]==' '&&str[i+1]!=' ')) {printf(",%d",a);a=0;}
  if(str[i+1]=='\0') printf(",%d",a);
  }
}

