#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double r;
    cin >> r;
    if (r > 0) {
        cout << fixed << setprecision(3) << r * 2 * 3.14 << endl << r * r * 3.14;
    }
}
