#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    double expected_score = 0.0;
    double expected_len = 0.0;
    
    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        expected_score = expected_score + (2 * expected_len + 1) * p;
        expected_len = (expected_len + 1) * p;
    }
    cout << fixed << setprecision(6) << expected_score << endl;
    return 0;
}
