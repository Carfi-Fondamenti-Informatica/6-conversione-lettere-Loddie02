#include "lib.h"

bool convert(char &c) {
   bool result;

    if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
        if (c >= 65 && c <= 90) {
            c = c+32;

            return  &c;
        }
        if (c >= 97 && c <= 122){
            c = c-32;
            return  &c;

        }


        result= true;
    } else {
        result= false;
    }

    return result;

}
