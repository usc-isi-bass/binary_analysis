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


int mycompare(const void *q1,const void *q2);


int t[1000],q[1000];
int n;

int main()
{
	int i,j;
    while(cin>>n)
	{
		if(n==0) return 0;
    for(i=0;i<n;i++)
    {
		cin>>t[i];
	}
    for(i=0;i<n;i++)
    {
		cin>>q[i];
	}
    qsort(t,n,sizeof(int),mycompare);
	qsort(q,n,sizeof(int),mycompare);
    int ans=0;
	int tf=0,tl=n-1,qf=0,ql=n-1;
	while(qf<=ql)
	{
      if(t[tf]>q[qf])
      {
		  ans++;
		  tf++;
		  qf++;
      }
	  else if(t[tl]>q[ql])
	  {
		  ans++;
		  tl--;
		  ql--;
	  }
	  else
	  {
		  if(t[tf]>q[ql])
		    ans++;
		  else if(t[tf]<q[ql])
			  ans--;
		  tf++;
		  ql--;
	  }
	}
	cout<<ans*200<<endl;
	}
	return 0;
}

int mycompare(const void *q1,const void *q2)
{
	int * p1=(int *)q1;
	int * p2=(int *)q2;
	return *p1-*p2;
}

