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
  char b[50][100];
  int l,ma,max,mi,min,i=1;
  scanf("%s",b[0]);
  ma=mi=strlen(b[0]);
  max=min=0;
 
	
	while(scanf("%s",b[i])==1)
	{
		l=strlen(b[i]);
	
		
		if(ma<l)
		{
			ma=l;
			max=i;
		}
		else if(l<mi)
		{
			mi=l;
			min=i;
		}
		i++;
	}
	printf("%s\n%s",b[max],b[min]);
}