#include <iostream>
using namespace std;

Class Course {
    private:
        int cId;
        string cName;
        int cCred;
    public:
        Course() : cID(0), cName(), cCred() {

        }
        int getcId() const {
            return cId;
        }
        string getCName() const {
            return cName;
        }
        int getCCred() const {
            return cCred;
        }
        void setCId(int id) {
            cId = id;
        }
        void setCName(string name) {
            cName = name;
        }
        void setCCred(int cred) {
            cCred = cred;
        }
};

int BinSearch() {
    
}

int main() {

}