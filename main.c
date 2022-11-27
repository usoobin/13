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
	struct student s = {1003, "juyeopkim",4.3}; 
	
	
	s.ID = 1020;
	strcpy(s.name, "kimjuyeop");
	s.grade = 4.2;
	
	
	printf("ID:%i\n", s.ID);
	printf("NAME:%s\n", s.name);
	printf("GRADE:%lf\n", s.grade);
	
	return 0;
}
