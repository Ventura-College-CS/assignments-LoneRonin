#include "midterm.hpp"
#include <iostream>

using namespace std;

int main () {
    Student s[5]; //Array of Class Students being initialized
    string name[] = {"Takeo", "Thy", "Yuumi", "Haru", "Irelia"}; //Array filled with nammes
    double scores[5][5] = {
        {87.0, 98.0, 100.0}, {100.0, 78.0, 65.0}, {100.0, 100.0, 100.0}, {83.0, 90.0, 60.0},{92.0, 86.0, 100.0}
    };

    Student tmp;
    vector<double> C;
   // Stack<Students, 10> CS;

   //need to take informtion from the Class aand instead put it into a loop
   for (int i = 0; i < 5; i++) {
       s[i]setSID(i);
       s[i]setSname(i);
       s[i]setScores(i);
       s[i]push(s[i]);
   }
   //something wrong but too tired to continue
    
}
//Needs to do for main
// initialize student array
// double array for scores
// push each sstudents info into queue
// pop and print all info