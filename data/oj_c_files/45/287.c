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
char a[50],b[50];
int i,j,k;
scanf("%s",a);scanf("%s",b);
for(i=0;b[i]!='\0';i++)
{k=i;
for(j=0;a[j]!='\0'&&a[j]==b[k];j++,k++)
;
if(a[j]=='\0')break;}
printf("%d",i);
}