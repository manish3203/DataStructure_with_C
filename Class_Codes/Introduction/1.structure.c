//Structure

#include <stdio.h>
#include <string.h>
struct cricplayer {

	char pName[20];
	int jerNo;
	float Sal;

}obj1 = {"Virat",18,5.00};
void main() {
	
	struct cricplayer obj2;

	strcpy(obj2.pName,"Rohit");
	obj2.jerNo = 45;
	obj2.Sal = 5.00;

	printf("%s\n",obj1.pName);
	printf("%d\n",obj1.jerNo);
	printf("%f\n",obj1.Sal);

	printf("%s\n",obj2.pName);
	printf("%d\n",obj2.jerNo);
	printf("%f\n",obj2.Sal);
}
