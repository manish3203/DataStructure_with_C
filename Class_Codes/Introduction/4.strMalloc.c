//structure using malloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct OTT {
	
	char pName[20];
	int user;
	float Price;
};
void main() {
	
	struct OTT *ptr1 = (struct OTT*)malloc(sizeof(struct OTT));
	strcpy((*ptr1).pName,"Netflix");
	ptr1->user = 2;
	ptr1->Price = 399.00;
	
	struct OTT *ptr2 = (struct OTT*)malloc(sizeof(struct OTT));
	strcpy(ptr2->pName,"Disney");
	ptr2->user = 1;
	(*ptr2).Price = 499.00;

	printf("%s\n",ptr1->pName);
	printf("%d\n",(*ptr1).user);
	printf("%f\n",ptr1->Price);
	
	printf("%s\n",ptr2->pName);
	printf("%d\n",(*ptr2).user);
	printf("%f\n",ptr2->Price);

}
