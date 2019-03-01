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
  char a[500];
  cin.getline(a,500);
  int i,j,k=1,l;
  l=strlen(a);
  while(k<l)
  {
    
    for(i=0,j=k; j<l; i++,j++)
        {
			int begin=i,end=j;
			while(begin<end)
            {
				if(a[begin]!=a[end]) break;
				else
                {
					begin++;
					end--;
				}
			}
			if(begin>=end)
            {
				int print=i;
				for(print; print<=j; print++)
					cout<<a[print];
				cout<<endl;
			}
		}
    k++;
  }
  cin.get();cin.get();cin.get();
  return 0;
}
