#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int 	LEN_NAME = 20;
const int 	NUM_SCORES = 3;

struct Student {
  int 	sid;
  char 	sname[LEN_NAME];
  double 	scores[NUM_SCORES];
  double  total_score;
};

Student *makeStudents(int);
void printStudents(Student * const, int);

int main() {
	const int N = 10;
	Student *ptr;

	ptr = makeStudents(N);
	printStudents(ptr, N);

	fstream f;
	f.open("students.bin");
}

Student *makeStudents(int N) {
  Student *ptr= new Student [N];
  ifstream ifs;
  ifs.open("students.txt");

  if ( ifs.fail()) {
    cout << "File open error\n";
    exit(0);
  }

	for(int i=0;i<N; i++) {
    ifs >> (ptr+i)->sid >> (ptr+i)->sname;
    for(int j=0; j<NUM_SCORES; j++) {
			ifs >> (ptr+i)->scores[j] ;
    }

		if ( ifs.fail() ) {
			cout << "File Read Error\n";
			exit(0);
		}
  }
	return ptr;
}

void printStudents(Student * const ptr, int N) {
  double temp_total;

  for(int i=0; i < N; i++) {
    cout << "ID: " << (ptr+i)->sid << endl;
    cout << "Name: " << (ptr+i)->sname << endl;
    cout << "Scores: " << endl;

    for(int j = 0; j < NUM_SCORES; j++) {
      cout << (ptr+i)->scores[j] << endl;
      temp_total += (ptr+i)->scores[j];
    }

    cout << "Total Score: " << endl;
    cout << temp_total << endl;
    (ptr+i)->total_score = temp_total;
    temp_total = 0;
    cout << endl;
  }
}
