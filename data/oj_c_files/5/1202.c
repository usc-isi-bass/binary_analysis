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
{
  char a[501];
  char b[501];
  int x,y;
  int i,s=0,q=0;
  double n,t;
  scanf ("%lf",&n);
  scanf ("%s",&a);
  scanf("%s",&b);
    x=strlen(a);
	y=strlen(b);
	if (x!=y){
	printf("error");
	}
	else {
		for (i=0;i<x;i++){
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
               printf ("error");
			   return 0;
	}
	if(a[i]==b[i])
		s++;
}
                t=n*x;
				if (s>t){printf("yes");
				}
				else printf ("no");
				}

	

                       return 0;



}