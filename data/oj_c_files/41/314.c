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
{int a[6]={0};int i=0,j=0;int x[6],b[6]={0};
	for(a[1]=1;a[1]<=5;a[1]++)if(a[1]!=6)
		for(a[2]=1;a[2]<=5;a[2]++)if(a[2]!=a[1])
			for(a[3]=1;a[3]<=5;a[3]++)if(a[3]!=a[1]&&a[3]!=a[2])
				for(a[4]=1;a[4]<=5;a[4]++)if(a[4]!=a[1]&&a[4]!=a[2]&&a[4]!=a[3]&&a[4]!=4)
				for(a[5]=1;a[5]<=5;a[5]++)if(a[5]!=a[1]&&a[5]!=a[2]&&a[5]!=a[3]&&a[5]!=a[4]&&a[5]!=2&&a[5]!=3)
				{x[1]=(a[5]==1);x[2]=(a[2]==2);x[3]=(a[1]==5);x[4]=(a[3]!=1);x[5]=(a[4]==1);
	if(x[1]+x[2]+x[3]+x[4]+x[5]==2)
	{for(i=1;i<=5;i++)
			if (a[i]==2&&x[i]==1)
				for(j=i;j<=5;j++)
					if(a[j]==1&&x[j]==1)
					{for(i=1;i<=4;i++)cout<<a[i]<<" ";cout<<a[5];cout<<endl;}
	}

for(i=1;i<=5;i++)
			if (a[i]==2&&x[i]==1)
				for(j=i;j>=1;j--)
					if(a[j]==1&&x[j]==1)
					{for(i=1;i<=4;i++)cout<<a[i]<<" ";cout<<a[5];cout<<endl;}

	}						   
	cin.get();cin.get();
	return 0;
}
