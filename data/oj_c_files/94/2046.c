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


int main() {
	int N,i,m=0,n=0,flag=0;
	int s[501],p[501];//?????
	cin>>N;

	for(i=0;i<N;i++)
	{
	    cin>>s[i];
        if(s[i]%2!=0) p[n++]=s[i];//?s[501]???????????p[501]?
	}
	for(int j=n-1;j>0;j--)
        {
            for(int l=0;l<j;l++)
            {
                if(p[l]>p[l+1])
                {
                    m=p[l];
                    p[l]=p[l+1];
                    p[l+1]=m;//?p??n???????????????
                }
            }
        }//?n-1????
      for (i=0;i<=n-1;i++)
      {if(i<n-1)
          cout<<p[i]<<",";
          else cout<<p[i];
      }
	return 0;
}
