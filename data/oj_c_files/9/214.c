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

struct data{
	int w;
	char c[20];
	int old;
	struct data *next;
	struct data *onext;
};
int main() {
	int i,j,n,max,x;
	scanf("%d",&n);
	struct data *head=(struct data*)malloc(sizeof(struct data));
	struct data *p,*pp,*de;
	pp=head;
	for(i=0;i<n;i++) {
		p=(struct data*)malloc(sizeof(struct data));
		scanf("%s %d",p->c,&p->w);
		p->old=0;
		pp->next=p;
		pp=p;
	}
	struct data *old=(struct data*)malloc(sizeof(struct data));
	pp=head->next;
	de=old;
	x=0;
	for(i=0;i<n;i++) {
		if(pp->w>59) {
			pp->old=1;
			de->onext=pp;
			de=pp;
			x++;
		}
		pp=pp->next;
	}


	for(i=0;i<x;i++) {
		pp=old->onext;
		max=0;
		for(j=0;j<x;j++) {
			if(pp->w>max) {
				max=pp->w;
				de=pp;
			}
			pp=pp->onext;
		}
		printf("%s\n",de->c);
		de->w=-1;
	}
	pp=head->next;
	for(i=0;i<n;i++) {
		if(pp->old==0) printf("%s\n",pp->c);
		pp=pp->next;

	}
}