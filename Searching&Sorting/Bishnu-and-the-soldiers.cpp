//problem:-https://www.hackerearth.com/problem/algorithm/bishu-and-soldiers-227/

//soln:-
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary(int target, vector<int>& power) {
    int low = 0;
    int high = power.size() - 1;

    if (target >= power[high]) return high;
    if (target < power[0]) return -1;

    while (low < high) {
        int mid = (low + high) >> 1;
        if (power[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low - 1; // largest index with power[index] <= target
}

vector<vector<int>> solve(int n, vector<int>& power, int q, vector<int>& qarr) {
    vector<vector<int>> ans;

    // prefix sum
    vector<long long> prefix(n);
    prefix[0] = power[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + power[i];
    }

    for (int i = 0; i < q; i++) {
        int target = qarr[i];
        int ind = binary(target, power);

        if (ind == -1) {
            ans.push_back({0, 0});
        } else {
            int people = ind + 1;
            int total = prefix[ind];
            ans.push_back({people, total});
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> power(n);
    for (int i = 0; i < n; i++) {
        cin >> power[i];
    }
    sort(power.begin(), power.end());

    int q;
    cin >> q;
    vector<int> qarr(q);
    for (int i = 0; i < q; i++) {
        cin >> qarr[i];
    }

    vector<vector<int>> temp = solve(n, power, q, qarr);

    for (int i = 0; i < temp.size(); i++) {
        for (int j = 0; j < temp[i].size(); j++) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
B
