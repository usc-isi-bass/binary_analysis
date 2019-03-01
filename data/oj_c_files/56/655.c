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

main()
{int a[6],l,i;

l=1;
 while(scanf("%1d",&a[l])==1)l++;
 l--;
 for(i=l;i>=1;i--)printf("%d",a[i]);
}
