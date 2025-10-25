#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int binary_search_count(const vector<int>& vec, int a) {
    int left = 0;
    int right = vec.size() - 1;
    int count = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        count++;
        if (vec[mid] == a) {
            break;
        } else if (vec[mid] > a) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return count;
}

int main() {
    srand(time(0));
    int N = 1000000;
    vector<int> vec(N);
    cout << "test1";

    for (int i = 0; i < N; i++) {
        vec[i] = rand() % 10000000 + 1;
    }
    cout << "test2";

    sort(vec.begin(), vec.end());
    cout << "test3";

    for (int i = 0; i < N; i++) {
        int a = vec[i];
        int count = binary_search_count(vec, a);
        cout << "Target: " << a << "  →  Steps: " << count << endl;
    }

    return 0;
}
