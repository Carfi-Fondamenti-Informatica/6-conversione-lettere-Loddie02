#include "lib.h"

bool convert(charc) {
   char conversion;

    if (c>=65 && c<=90 || c>=97 && c<=122) {
        if (c>=65 && c<=90) {
            conversion=c+32;
        }
        if (c>=97 && c<=122){
            conversion=c-32;
        }
        return true;
    } else {
        return false;
    }

}
