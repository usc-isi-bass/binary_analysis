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
 double c,f=0;
 int d,e,i;
 scanf("%lf",&c);
 char a[100],b[100];
 scanf("%s%s",&a,&b);
 d=strlen(a);
 e=strlen(b);
 if(d!=e) printf ("error");
 else {
	 for (i=0;i<d;i++){
		 if ((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')) {
			 printf("error");
			 return 0;;
		 }
		 else {
			 if(a[i]==b[i]) f++;
		 }
	 }
	 if (f/e>=c) printf ("yes");
	 else printf("no");
 }
 return 0;

}

	   
       
