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
	int n,l,b=0;
	scanf ("%d",&n);
	for (int m=5;m <=n;m++){
		l=0;
		for(int i=2;i<m;i++){
			if (m%i==0)
			l++;	
		} 
		int a=0;
		if(l==0){
			for (int k=2;k<m-2;k++){
				if ((m-2)%k==0)
				a++;
			}}
		if(a==0&&l==0){
		printf ("%d %d\n",m-2,m);
		b++;}
		}
	if (b==0)
	printf("empty"); 
			
	} 