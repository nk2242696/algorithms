#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long GetRequiredCandies(vector<long long> Students) {
    long long N = Students.size();
    long long TotalCandies = 0,i;

    vector<long long> Left = vector<long long>(N, 1);
    vector<long long> Right = vector<long long>(N, 1);

    for ( i = N - 2; i >= 0; i--) {
        if (Students[i + 1] <Students[i])
            Right[i] = 1 + Right[i + 1];
    }

    for (i = 1; i < N; i++) {
        if (Students[i - 1] <Students[i])
            Left[i] = 1 + Left[i - 1];
    }

    for ( i = 0; i < N; i++) {
        TotalCandies += max(Right[i], Left[i]);
    }

    return TotalCandies;
}

int main() {
    long long N, Score,i;
    cin >> N;

    vector<long long> Students;

    for ( i = 0; i < N; i++) {
        cin >> Score;
        Students.push_back(Score);
    }

    cout << GetRequiredCandies(Students) << endl;

    return 0;
}
