#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    int maxValue = *max_element(numbers.begin(), numbers.end());

    cout << maxValue;
    return 0;
}
