#include <stdlib.h>
#include "classeStructure.h"
#include <cstdio>
int main()
{
	struct Structure *p;
	p = (struct Structure*)malloc(sizeof(struct Structure));
	(*p).i=2;
	(*p).clear();
	printf("valeur de i %d",(*p).i);

    	return 0;
}

