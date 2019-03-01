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
{char *a,*s1;
a=(char *)malloc(101*sizeof(char));
s1=(char *)malloc(101*sizeof(char));
gets(a);
int i,l;
for(i=0;*(a+i+1);i++)
(*(s1+i))=*(a+i)+*(a+i+1);
(*(s1+(i++)))=*(a+i)+*a;
(*(s1+i))='\0';
printf("%s",s1);
return 0;}
