#include "birthday.h"

std::string birthday::getBirthDay(){
    std::string day = "";
    std::string convert = "";
    convert = to_string(day);
    day += convert;
    convert = to_string(month);
    day += convert;
    convert = to_string(year);
    day += convert;
    return day;
}
