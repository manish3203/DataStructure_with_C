//Structure Pointer || 

#include <stdio.h>
struct Movie {
	
	char mName[20];
	int noTicket;
	float tPrice;
}obj1 = {"Drishyam2",4,1200.00};
void main() {
	
	typedef struct Movie mv;
	mv obj2 = {"Pathan",6,1700.00};

	struct Movie *ptr1 = &obj1;
	mv *ptr2 = &obj2;

	printf("%s\n",(*ptr1).mName);
	printf("%d\n",ptr1->noTicket);
	printf("%f\n",ptr1->tPrice);
	
	printf("%s\n",ptr2->mName);
	printf("%d\n",(*ptr1).noTicket);
	printf("%f\n",ptr1->tPrice);
}
