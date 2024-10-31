#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> numbers(N);

    for(int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    vector<int> result;

    for(int i = 0; i < N; i += K)
    {
        int groupMin = INT_MAX;
        for(int j = i; j < i + K && j < N; ++j)
        {
            if(groupMin > numbers[j])
            {
                groupMin = numbers[j];
            }
        }
        result.push_back(groupMin);
    }

    for(int minVal : result)
    {
        cout << minVal << " ";
    }
    return 0;
}
