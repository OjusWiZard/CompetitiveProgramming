#include <iostream>

using namespace std;

int main() {
    int up = 0, c = 0;
    char s[100];
    cin >> s;
    for (int i = 0; (s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'); i++) {
        c++;
        if (s[i] <= 'Z') up++;
    }
    if (up > c - up) {
        for (int i = 0; (s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'); i++) {
            if (s[i] > 'Z') s[i] -= 32;
        }
    } else {
        for (int i = 0; (s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'); i++) {
            if (s[i] <= 'Z') s[i] += 32;
        }
    }
    cout << s;
    return 0;
}