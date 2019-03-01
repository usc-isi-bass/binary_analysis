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
 { 
   int n, m, i, s;          
   while (scanf ("%d %d",&n,&m)&&n!=0&&m!=0)
   {
	s=0;     
   	for (i=2; i<=n; i++) 
   	s=(s+m)%i;    
   	printf ("%d\n", s+1);	
   } 
 }