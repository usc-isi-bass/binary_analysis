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

int main ()
{ 
double k;
int total1,total2;
int i,same=0;
char h1[10000];
char h2[10000];
scanf("%lf",&k);
scanf("%s",h1);
scanf("%s",h2);
total1= (int)strlen(h1);
total2= (int)strlen(h2);

if (total1!=total2){printf ("error");return 0;}
else	{   for (i=0;i<total1;i++)
			{
				if ((h1[i]=='A'||h1[i]=='T'||h1[i]=='C'||h1[i]=='G')&&(h2[i]=='A'||h2[i]=='T'||h2[i]=='C'||h2[i]=='G'))
					{
					if (h1[i]==h2[i]){same++;}
					}
				else {printf("error");return 0;}
			}
		}
if (((double)same/(double)total1)>k){printf("yes");}
else {printf("no");}

return 0;
}

