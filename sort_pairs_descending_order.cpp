#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<double, int> a, pair<double, int> b) {
    if (a.first > b.first) {
        return true;
    }
    return false;
}

int main() {
    vector<pair<double, int>> test;
    int weight[] = {1, 2, 1, 2, 3, 3};
    double values[] = {10000, 40000, 8000, 8000, 15000, 19000};
    int n = sizeof(weight) / sizeof(weight[0]);
    for (int i = 0; i < n; i++) {
        test.push_back(make_pair(values[i], weight[i]));
    }
    sort(test.begin(), test.end(), comp);
    cout << "Pairs in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << "(" << test[i].first << ", " << test[i].second << ") ";
    }
    return 0;
}
