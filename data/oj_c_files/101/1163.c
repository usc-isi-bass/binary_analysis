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

	int i,j,a[4]={0},words[4]={0};

	char b[4]={'0','A','B','C'};

	for(a[1]=1;a[1]<=3;a[1]++)

	{

		for(a[2]=1;a[2]<=3;a[2]++)

		{

			a[3]=6-a[1]-a[2];

			words[1]=(a[2]>a[1])+(a[1]==a[3]);

			words[2]=(a[1]>a[2])+(a[1]>a[3]);

			words[3]=(a[3]>a[2])+(a[1]<a[2]);

			if(a[1]==a[2]||a[1]==a[3]||a[2]==a[3])

				continue;

			if((a[1]+words[1]!=3)||(a[2]+words[2]!=3)||(a[3]+words[3]!=3))

				continue;

			for(i=1;i<=3;i++)

			{

				for(j=0;j<=3;j++)

				{

					if(a[j]==i)

						cout<<b[j];

				}

			}

		}

	}


			return 0;
}