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
	int a,b;
	cin>>a>>b;
	int n[a][b];
	int s=0,e=b-1,p=0,q=a-1;
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			cin>>n[i][j];
	
	if(s==e)
				for(int i=p;i<=q;i++)
					cout<<n[i][0]<<endl;
			else if(p==q) for(int i=s;i<=e;i++)
				cout<<n[0][i]<<endl;

	
	while(s<e&&p<q)
	{
		for(int i=s;i<e;i++){
			cout<<n[p][i]<<endl;

		}

		for(int i=p;i<q;i++)
					{cout<<n[i][e]<<endl;}
		for(int i=e;i>s;i--)
					{cout<<n[q][i]<<endl;}
		for(int i=q;i>p;i--)
					{cout<<n[i][s]<<endl;}
		s++;
		e--;
		p++;
		q--;
	if(s==e){for(int i=p;i<=q;i++)
		{cout<<n[i][s]<<endl;}
	break;
	}
	if(p==q){for(int i=s;i<=e;i++)

		{cout<<n[p][i]<<endl;}
	break;
	}

	}
	
	
	return 0;

}
