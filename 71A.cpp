#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    for (string s : words) {
        if (s.length() > 10)
            cout << s[0] << s.length() - 2 << s.back() << '\n';
        else
            cout << s << '\n';
    }
}
