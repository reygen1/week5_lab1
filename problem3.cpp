#include<iostream>
using namespace std;
int main() {
    int terms = 0;

    while (terms < 100 ) {
        terms++;
        if (terms % 5 != 0) {
            cout << terms  << endl;
        }

    }

}