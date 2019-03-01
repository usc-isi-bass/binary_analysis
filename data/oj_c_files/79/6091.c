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
  int n[100], m[100]; 
  int l=0, s=0,j=0,i=0;
  scanf("%d%d", &n[0], &m[0]);
  while(n[l]!=0)
  {
	  l++; 
	  scanf("%d%d", &n[l], &m[l]);
  }
  for(j=0;j<=l-1;j++)
  {		s=0;
		for (i=2; i<=n[j]; i++) s=(s+m[j])%i;
		printf ("%d\n", s+1);
		
  }


}