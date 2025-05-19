#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string num, line;
        num = "";
        cin.ignore();
        for (int i = 0; i < (n + 49) / 50; i++) {
            getline(cin, line);
            num += line;
        }

        long long max_product = 0;
        for (int i = 0; i <= n - k; i++) {
            long long product = 1;
            for (int j = 0; j < k; j++) {
                char digit_char = num[i + j];
                if (digit_char == '0') {
                    product = 0;
                    break;
                }
                product *= digit_char - '0';
            }
            max_product = max(max_product, product);
        }

        cout << max_product << endl;
    }

    return 0;
}
