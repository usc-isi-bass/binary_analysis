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
{struct student
{char a[100];
 struct student *next;
} *p1,*p2,*head;
int n=0;
p1=p2=(struct student *)malloc(sizeof(struct student));
head=NULL;
gets(p1->a);
while(strcmp(p1->a,"end"))
{n++;
if(n==1)
head=p1;
else
p2->next=p1;
p2=p1;
p1=(struct student *)malloc(sizeof(struct student));
gets(p1->a);
}
p2->next=NULL;
for(;;)
{ for(p2=head;;p2=p2->next)
  { p1=p2->next;
	  if(p1->next==NULL)
	  {printf("%s\n",p1->a);
        p2->next=NULL;
		break;
	  }
  }
if(p2==head)
{printf("%s\n",head->a);
break;
}

}



}