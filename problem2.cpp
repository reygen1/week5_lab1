#include<iostream>
using namespace std;
int main() {
    int terms = 0;
    int sum =0;
    while (terms < 10) {
        terms++;
        sum += terms;
       cout << terms << endl;
    }
    cout << "Sum = " << sum << endl;
}