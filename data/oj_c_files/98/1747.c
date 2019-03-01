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

char c[45];
int main()
{  
	int n,cnt=0,s=0;
	cin>>n;
	while(cnt<=n)
	{  
		while(1){
		memset(c,0,sizeof(c));
		cin>>c;//??????
		cnt++;
	  if(cnt==1||cnt==n){if(cnt==1) {cout<<c;s=strlen(c);}
	  							else cout<<' '<<c<<endl;}
	  else {s+=strlen(c)+1;
			if(s>80){cout<<endl<<c;break;}
		else cout<<' '<<c;}
		}
		s=strlen(c);
	}
		
}