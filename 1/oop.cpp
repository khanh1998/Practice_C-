#include <iostream>
#include <string>
#include "birthday.h"
using namespace std;

class student {
    public:
        student(string nm, birthday bd, string add, double score):birth(bd){
            name = nm;
            address = add;
            GPA = score;
        }
        ~student(){
            cout << "Good bye and see you again!";
        }
        string printname(){
            return name;
        }
        string printbd(){
            return birth.getBirthDay();
        }

    private:
        string name;
        string address;
        birthday birth;
        double GPA;
};

int main(int argc, char * argv[]){
    birthday bd(22,2,2002);
    student khanh("khanh", bd, "HCMC VN", 9.0);
    cout << khanh.printname() << endl << khanh.printbd();

    return 0;
}
