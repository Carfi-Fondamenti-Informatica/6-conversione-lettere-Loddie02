#include "lib.h"

bool convert(char &c) {
   char conversion;
   bool result;

    if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
        if (c >= 65 && c <= 90) {
            conversion = c+32;

            return  &c;
        }
        if (c >= 97 && c <= 122){
            conversion = c-32;
            return  &c;

        }


        result= true;
    } else {
        result= false;
    }

    return result;

}
