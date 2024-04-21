#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    // Create a vector to keep track of the teeth
    vector<bool> teeth(N, true);

    for (int i = 0; i < Q; i++) {
        int T;
        cin >> T;

        // Treat the tooth in the given hole
        if (teeth[T - 1]) {
            // If there is a tooth, remove it
            teeth[T - 1] = false;
        } else {
            // If there is no tooth, grow a new one
            teeth[T - 1] = true;
        }
    }

    // Count the number of remaining teeth
    int count = 0;
    for (bool tooth : teeth) {
        if (tooth) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}