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


void bdx(int,int,int,int);
int main() 
{
	for(int z=1;z<6;z++)
	{
		for(int q=1;q<6;q++)
		{
			for(int s=1;s<6;s++)
			{
				for(int l=1;l<6;l++)
				{
					if(z+q==s+l&&(z+l)>(s+q)&&(z+s)<q)
					{
						bdx(z,q,s,l);
					}
				}
			}
		}
	}

return 0;
}

void bdx(int z,int q,int s,int l)
{
	if(z>q)
	{
		cout<<"l "<<l*10<<endl
			<<"z "<<z*10<<endl
			<<"q "<<q*10<<endl
			<<"s "<<s*10<<endl;
	}
	else if(l>q&&q>z&&z>s)
	{
		cout<<"l "<<l*10<<endl
			<<"q "<<q*10<<endl
			<<"z "<<z*10<<endl
			<<"s "<<s*10<<endl;
	}
	else if(l>q&&q>s&&s>z)
	{
		cout<<"l "<<l*10<<endl
			<<"q "<<q*10<<endl
			<<"s "<<s*10<<endl
			<<"z "<<z*10<<endl;
	}
	else if(q>l&&z>s)
	{
		cout<<"q "<<l*10<<endl
			<<"l "<<q*10<<endl
			<<"z "<<z*10<<endl
			<<"s "<<s*10<<endl;
	}
	else if(q>l&&l>s&&s>z)
	{
		cout<<"q "<<q*10<<endl
			<<"l "<<l*10<<endl
			<<"s "<<s*10<<endl
			<<"z "<<z*10<<endl;
	}
	else if(s>l)
	{
		cout<<"q "<<q*10<<endl
			<<"s "<<s*10<<endl
			<<"l "<<l*10<<endl
			<<"z "<<z*10<<endl;
	}
}