#include <iostream>
#include "lib.h"
using namespace std;
int main() {

    char a=0;

    cin>>a;

    conversione(a);

    if (((a>=65)&&(a<=90)) || ((a>=97)&&(a<=122))) {

        cout<<conversione(a)<<endl;
    } else {

        cout<<"errore"<<endl;

    }


    return 0;
}
