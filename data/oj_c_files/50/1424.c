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

int main ()
{
int w,i;
int s[365];

scanf ("%d",&w);

for (i=1;i<366;i++)
{s[i]=w+i-1;

while (s[i]>7)
	{s[i]=s[i]-7;}

if(i<=31)
	{if((i==13)&&(s[i]==5))
		printf("1\n");
	}

else if(i-31<=28)
	{if((i-31==13)&&(s[i]==5))
		printf("2\n");
	}

else if(i-31-28<=31)
	{if((i-31-28==13)&&(s[i]==5))
		printf("3\n");
	}

else if(i-31-28-31<=30)
	{if((i-31-28-31==13)&&(s[i]==5))
		printf("4\n");
	}
else if(i-31-28-31-30<=31)
	{if((i-31-28-31-30==13)&&(s[i]==5))
		printf("5\n");
	}
else if(i-31-28-31-30-31<=30)
	{if((i-31-28-31-30-31==13)&&(s[i]==5))
		printf("6\n");
	}
else if(i-31-28-31-30-31-30<=31)
	{if((i-31-28-31-30-31-30==13)&&(s[i]==5))
		printf("7\n");
	}
else if(i-31-28-31-30-31-30-31<=31)
	{if((i-31-28-31-30-31-30-31==13)&&(s[i]==5))
		printf("8\n");
	}
else if(i-31-28-31-30-31-30-31-31<=30)
	{if((i-31-28-31-30-31-30-31-31==13)&&(s[i]==5))
		printf("9\n");
	}
else if(i-31-28-31-30-31-30-31-31-30<=31)
	{if((i-31-28-31-30-31-30-31-31-30==13)&&(s[i]==5))
		printf("10\n");
	}
else if(i-31-28-31-30-31-30-31-31-30-31<=30)
	{if((i-31-28-31-30-31-30-31-31-30-31==13)&&(s[i]==5))
		printf("11\n");
	}
else if(i-31-28-31-30-31-30-31-31-30-31-30<=31)
	{if((i-31-28-31-30-31-30-31-31-30-31-30==13)&&(s[i]==5))
		printf("12\n");
	}

}

return 0;
}