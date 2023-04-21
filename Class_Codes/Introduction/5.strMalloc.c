//structure using malloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Company {
	
	char cName[20];
	int empCount;
	float revenue;
};
void main() {
	
	struct Company *ptr1 = (struct Company*)malloc(sizeof(struct Company));
	strcpy((*ptr1).cName,"Nvdia");
	ptr1->empCount = 760;
	ptr1->revenue = 9.00;
	
	struct Company *ptr2 = (struct Company*)malloc(sizeof(struct Company));
	strcpy(ptr2->cName,"AMD");
	ptr2->empCount = 560;
	(*ptr2).revenue = 6.00;

	printf("%s\n",ptr1->cName);
	printf("%d\n",(*ptr1).empCount);
	printf("%f\n",ptr1->revenue);
	
	printf("%s\n",ptr2->cName);
	printf("%d\n",(*ptr2).empCount);
	printf("%f\n",ptr2->revenue);

}
