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
{int n,i;
char a[100],b[100];
int a1[100];
int *p,*p1;

gets(a);
n=strlen(a);
for(i=0;i<n;i++)
a1[i]=a[i];
p=a1;
p1=a1;
for(i=0;i<=n-2;i++)
{b[i]=(*p)+(*(p+1));
p++;
}
b[n-1]=(*p)+(*p1);
for(i=0;i<=n-1;i++)
printf("%c",b[i]);
return 0;

}
