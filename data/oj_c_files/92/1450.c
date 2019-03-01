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


void sort(int a[],int n)                                         //???????? 
{
	int i,j,k,t;
	for (i=0;i<n;i++)
	{	k=i;
		for (j=i;j<n;j++)
			if (a[j]>a[k])
				k=j;
		if (i!=k)
			{t=a[i];	
			a[i]=a[k];
			a[k]=t;}
	}
}

main()
{	int n,i,j,k,l,s;
	int t[MAX],q[MAX];
	while (1)
		{scanf("%d",&n);
		if (n==0)
			break;
		for (i=0;i<n;i++)
			scanf("%d",&t[i]);
		for (i=0;i<n;i++)
			scanf("%d",&q[i]);
		sort(t,n);
		sort(q,n);
		s=0;	 
		for (k=0,i=0,j=0,l=n-1;k<n;k++)
			{	if (t[i]>q[j])
					{i++;
					j++;
					s++;}
				else if (t[l-j+i]>q[l])
					{l--;
					s++;}
				/*else if (t[l-j+i]<q[l])
					{j++;
					s--;}*/
					else if (t[l-j+i]<q[j])
						{j++;
						s--;}
						else
						j++;
												
			}
		printf("%d\n",s*200);			
					
					
					
				
				
			}		
		}
