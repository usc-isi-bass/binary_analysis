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
int a[20001],b[101],c[101];
  int i,n,m;
  scanf("%d",&n);
  for (i=1;i<=n;i++) scanf("%d",&a[i]);
  for (i=0;i<=101;i++) b[i]=0; 
  m=0;
  for (i=1;i<=n;i++) if (b[a[i]]==0) {m=m+1; b[a[i]]=1; c[m]=a[i];}
  for (i=1;i<=m;i++) {if (i<m) printf("%d ",c[i]); else printf("%d",c[i]);}
}