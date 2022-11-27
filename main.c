#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
	int ID;
	char name[10];
	double grade;		
};


int main(int argc, char *argv[]) 
{
	struct student s;
	s.ID = 1003;
	strcpy(s.name, "juyeopkim");
	s.grade = 4.3;
	
	printf("ID: %i\n",s.ID); 
	printf("name: %s\n",s.name);
	printf("grade: %lf\n",s.grade);
	
	return 0;
}
