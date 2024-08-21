#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int Q;
    cin >> Q;

    unordered_map<int, int> counts;
    unordered_set<int> unique_values;
    vector<int> results;

    for (int i = 0; i < Q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            counts[x]++;
            unique_values.insert(x);
        } else if (type == 2) {
            int x;
            cin >> x;
            counts[x]--;
            if (counts[x] == 0) {
                unique_values.erase(x);
            }
        } else if (type == 3) {
            results.push_back(unique_values.size());
        }
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
