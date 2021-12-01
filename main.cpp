using namespace std;
#include <iostream>
#include "lib.h"


int main() {
    char input;
    bool result;
    char conversion;
    cin>>input;

    result=convert(input);
    cout<<result<<endl;

    if (result==true) {
        if (input>=65 && input<=90) {
            conversion= nput+32;
        }
        if (input>=97 && input<=122) {
            conversion=input-32;
        }
        cout<<conversion<<endl;
    } else {
        cout<<"errore";
    }
    return 0;
}
