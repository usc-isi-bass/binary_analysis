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
	char sho[100],lo[100];
	int i,sl,l,k,j,g,h=0;
	scanf("%s%s",sho,lo);
	sl=strlen(sho);
	l=strlen(lo);
    for(j=0;j<l;j++)
	{
		
		if(sho[0]==lo[j])
		{
		    g=j;
	        for(k=g+1,i=1;k<=sl+g,i<=sl;k++,i++)
			{
			    if(sho[i]==lo[k])
				{
				    if(k==sl+g-1)
					{
						h++;
						if(h==1)
						{
					       printf("%d",g);
						}
						else if(h>1)
						{
							break;
						}
					}
				}
			    else
				{
					break;
				}
			}
		}
		
	}
	return 0;
}


			