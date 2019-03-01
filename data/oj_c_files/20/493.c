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

void main()
{
	int max,i,max_index;
	char str1[20],str2[10],ans[20];
	char *ipstr1=str1;
	while(scanf("%s%s",str1,str2)!=EOF)
	{
		max=0;
		for(i=1;*(str1+i);i++)/*??????????
			???str1[i]??'\0'????????*/
			if(*(str1+i)>max) max=*(str1+i),max_index=i;
		strcpy(ans,"");
		strncat(ans,str1,max_index+1);/*??(max_index+1)?????*/
		strcat(ans,str2);
		strcat(ans,str1+max_index+1);
		/*??(max_index+1)???????????????????????*/
		printf("%s\n",ans);
	}
	
}