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
	struct student s = { 1003, "juyeopkim", 4.3};
	
	s.ID = 1020;
	strcpy(s.name, "kimjuyeop");
	s.grade = 3.3;
	
	printf("ID: %i\n",s.ID); 
	printf("name: %s\n",s.name);
	printf("grade: %lf\n",s.grade);
	
	return 0;
}
