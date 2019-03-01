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
{int i;
 char a[200],*p,*head;
 p=a;
 head=a;
 gets(a);
 i=strlen(a);

 for(p=a;p<a+i-1;p++){
                            printf("%c",*p+*(p+1));
                            }
 printf("%c",*p+*head);
   scanf("%d",&i);
return 0;
}
