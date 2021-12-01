using namespace std;
#include <iostream>
#include "lib.h"


int main() {
    char c=c;
    cin>>c;

    if (convert(c)) {
        if (c >= 65 && c <= 90) {
            c = c + 32;
        }
        if (c >= 97 && c <= 122) {
            c = c - 32;
        }
        cout<<c<<endl;
    } else {
        cout<<"errore";
    }
    return 0;
}
