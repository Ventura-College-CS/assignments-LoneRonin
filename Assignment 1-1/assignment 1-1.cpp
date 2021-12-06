#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
void findStudent(ifstream &, int);

struct Student {
    int id;
    char StuName[20];
    double score[2];
    double sum, avg;
};

int main(){
    ifstream ifs;
    ofstream ofs;
    Student s;
    int IdNum;

    ifs.open("student.txt");
    ofs.open("student.bin");

    for(int i=0; i<=9; i++) {
        ifs >> s.id;
        ifs >> s.StuName;
        ifs >> s.score[0]; 
        ifs >> s.score[1];
        s.sum = s.score[0] + s.score[1];
        s.avg = s.sum/2.0;

        ofs.write((char*)&s, sizeof(s));

        cout << "ID from Bin: " << s.id
            << "/n Name from Bin: " << s.StuName
            << "/n Average from Bin: " << s.avg << endl;
    }

    ifs.close();
    ofs.close();

    ifs.open("student.bin");
    cout << "Search Student ID number: " << endl;
    cin >> IdNum;
    findStudent(ifs, IdNum);
};

void findStudent(ifstream &ifs, int IdNum) {
    Student s;
    
    //need to make case for not found id
    if(IdNum == s.id) {
        
        s.sum = s.score[0] + s.score[1];
        s.avg = s.sum / 2.0;
		cout << "ID: " <<s.id
		    << "\nName: " << s.StuName
		    << "\nScore 1: " << s.score[0]
		    << "\nscore 2: " <<s.score[1]
		    << "\nSum  : " << s.sum
		    << "\nAvg  : " << s.avg << endl;
    }
}