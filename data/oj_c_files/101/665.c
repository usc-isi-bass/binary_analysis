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
	int eat[3],words[3],i,j,p;//eat[3]:??????words[3]:??????i?j??????p???????????
	char ch,name[3]={'A','B','C'};//ch:???????????name[3]:?????
	for(eat[0]=0;eat[0]<3;eat[0]++)
	{
		for(eat[1]=0;eat[1]<3;eat[1]++)
			{
				if(eat[1]==eat[0]) continue;
				eat[2]=3-eat[0]-eat[1];
				words[0]=(eat[1]>eat[0])+(eat[0]==eat[2]);
				words[1]=(eat[0]>eat[1])+(eat[0]>eat[2]);
				words[2]=(eat[2]>eat[1])+(eat[1]>eat[0]);
				for(i=1;i<3;i++)
					for(j=1;j<3-i;j++)
					{
						if(words[j]>words[j+1])
						{
							p=words[j];
							words[j]=words[j+1];
							words[j+1]=p;
							p=eat[j];
							eat[j]=eat[j+1];
							eat[j+1]=p;
							ch=name[j];
							name[j]=name[j+1];
							name[j+1]=ch;
						}
					if(eat[0]>eat[1]&&eat[1]>eat[2])
						cout<<name[2]<<name[1]<<name[0];
					}

			}
	}
	return 0;
}
