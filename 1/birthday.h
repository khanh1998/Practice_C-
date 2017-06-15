#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>

class birthday{
    private:
        int year;
        int month;
        int day;
    public:
        birthday(int d, int m, int y):day(d), month(m), year(y){};
        std::string getBirthDay();
};
#endif
