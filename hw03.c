#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1,
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
  // TODO: add fields here for major and year
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
break;
    case MAJOR_AND_NAME:
      printf("%s %s %s\n", s.major, s.last_name, s.first_name);
break;   
    case YEAR_AND_NAME:
      printf("%i %s %s\n", s.year, s.last_name, s.first_name);
      break;
	}
}
int main(int argc, char **argv) {
   int mode;
   mode = atoi(argv[1]);

	int n = 2; 
while(n<=sizeof(argv)) {
	Student s;
	s.first_name = argv[n];
	s.last_name = argv[n + 1];
 	s.major = argv[n +2];
	s.year = atoi(argv[n +3]);
	print_student(mode, s);
n = n + 4;
}
return 0;
}
