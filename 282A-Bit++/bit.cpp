#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 150) {

        int x = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            if (s[1] == '+') {
                x++;
            } else {
                x--;
            }
        }

        cout << x << endl;
    }

    return 0;
}