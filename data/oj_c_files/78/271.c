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
	int z,q,s,l;
    char a[6]={0,0,0,0,0,0};
	for(z=1;z<=5;z++)
    	for(q=1;q<=5;q++)
    		for(s=1;s<=5;s++)
    			for(l=1;l<=5;l++)
    			{
    				if((z==q)||(q==s)||(s==l)||(z==s)||(q==l)) continue;
    				if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
    				{
    					a[z]='z';
    					a[q]='q';
    					a[s]='s';
    					a[l]='l';

    					for(int i=5;i>=1;i--)
    					{
    						if (a[i]==0) continue;
    						cout<<a[i]<<" "<<i*10<<endl;
    					}
    				}
    			}
   return 0;
}