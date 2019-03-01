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
    //freopen("in.txt","r",stdin);
	char *p1,*p2,*p,*pp,*p1s;
	p1=(char *)malloc(100*sizeof(char));
	p2=(char *)malloc(100*sizeof(char));
	p=(char *)malloc(100*sizeof(char));
	pp=(char *)malloc(100*sizeof(char));
	//p1 p2 p??????????????????
	while(scanf("%s%s",p1,p2)!=EOF)
	{
		int max=0;
		pp=p1;
		p1s=p1;
      while(*p1!='\0')
	  {
		  if(*p1>max) max=*p1;
		  p1++;
	  }
	  //???
	  //printf("%c\n",max);
	  //printf("%s\n",pp);
      char *ps;
      ps=p;
	  while(*pp!=max)
	  {

		  *p=*pp;
		  p++;
		  pp++;
	  }
	  *p=*pp;
	  p++;
	  pp++;
	  *p='\0';
	  //?????????????p?
	 // printf("%s\n",ps);
	  //printf("%s\n",p2);
	  strcat(ps,p2);//??
	  //printf("%s\n",ps);
	  while (*p!='\0') *p++;

	  while(*pp!='\0')
	  {
		  *p=*pp;
		  p++;
		  pp++;
	  }
	  *p='\0';
	  //???????????p
	  printf("%s\n",ps);
	}
    return 0;
}
