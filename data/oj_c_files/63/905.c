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
    int x1,y1,x2,y2,a[101][101],b[101][101],c[101][101],i,j,k;
    cin>>x1>>y1;
    for(i=0;i<x1;i++)
   { for(j=0;j<y1;j++)
     cin>>a[i][j];
    }
   cin>>x2>>y2;
   for(i=0;i<x2;i++)
   { for(j=0;j<y2;j++)
     cin>>b[i][j];
    }
     
      for(i=0;i<x1;i++)
        for(j=0;j<y2;j++)
		{c[i][j]=a[i][0]*b[0][j];
     for(k=1;k<x2;k++)
   c[i][j]=c[i][j]+a[i][k]*b[k][j];}

		for(i=0;i<x1;i++)
      {           cout<<c[i][0];
	  for(j=1;j<y2;j++)
          cout<<" "<<c[i][j];      
          cout<<endl;
   }
     
    return 0;
}
