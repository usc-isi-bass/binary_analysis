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
  int z,q,s,l;
  int a1,a2,a3;
  char name[6];
  int weight[6];
  int i=0;

  for(i=0;i<6;i++)
    weight[i]=0;

  for (z=1;z<=5;z++)
  {   
	  for (q=1;q<=5;q++)
	  {  
		  for (s=1;s<=5;s++)
		  {  
			  for (l=1;l<=5;l++)
			  {   

			      a1=(z+q)==(s+l);
				  a2=(z+l) >(s+q);
				  a3=(z+s) <q;

				  if(a1&&a2&&a3)
				  {
					  name[z]='z'; weight[z]=z*10;
                      name[q]='q'; weight[q]=q*10;
                      name[s]='s'; weight[s]=s*10;
                      name[l]='l'; weight[l]=l*10;
				  }
			  }
		  }
	  }
  }

  
  
  for(i=5;i>=0;i--)
  {
	  if(weight[i]!=0)
	  cout<<name[i]<<" "<<weight[i]<<endl;
  }

return 0;
}