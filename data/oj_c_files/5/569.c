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

main ()
{
	float a,f;
	int x,y,b=0,c=0;
	char d1[501],d2[501];
	scanf ("%f",&a);
	scanf ("%s",d1);
	scanf ("%s",d2);
	x=strlen(d1);y=strlen(d2);
	if (x!=y)
	printf ("error");
	else
	{for (int i=0;i<=x-1;i++)
     {if ((d1[i]=='A'||d1[i]=='T'||d1[i]=='C'||d1[i]=='G')&&(d2[i]=='A'||d2[i]=='T'||d2[i]=='C'||d2[i]=='G'))
  		 {if (d1[i]==d2[i])
		   b++;}
  	  else
  	  {c=1;break;}		 		 
     }
    f=(float)b/(float)x;
    if (c==0&&f>a)
    printf ("yes");
    else if (c==0&&f<=a)
    printf ("no");
    else 
    printf ("error");
	}
}