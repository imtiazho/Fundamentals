#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, s;
        cin >> n >> s;

        long long max_sum = n * (n + 1) / 2;

        if (s > max_sum) {
            cout << "-1" << endl;
            continue;
        }

        vector<int> result;
        for (int i = n; i >= 1; --i) {
            if (s >= i) {
                result.push_back(i);
                s -= i;
            }
        }

        if (s != 0) {
            cout << "-1" << endl;
        } else {
            for (size_t i = 0; i < result.size(); ++i) {
                if (i > 0)
                {
                    cout << " ";
                }
                cout << result[i];
            }
            cout << endl;
        }
    }

    return 0;
}
