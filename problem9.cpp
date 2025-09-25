#include <iostream>
using namespace std;
int main () {
    int n ;
    cin >> n;

    int sq = 0;
    int sumsq = 0;


    for (int i = 1; i <= n; i++) {
        sq = i*i;
        sumsq += sq;
        cout << i << "*" << i << " = " << sq << endl;

    }
    cout << sumsq << endl;
}