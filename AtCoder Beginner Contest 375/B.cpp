#include <iostream>
#include <cmath>  // 用于sqrt函数
using namespace std;

int main() {
    int N;
    cin >> N;  // 读取点的数量

    double total_cost = 0.0;  // 用于存储总的花费
    int x_prev = 0, y_prev = 0;  // 起点(0, 0)作为起始点

    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;  // 读取每个点的坐标
        total_cost += sqrt(pow(x - x_prev, 2) + pow(y - y_prev, 2));
        x_prev = x;
        y_prev = y;
    }
    total_cost += sqrt(pow(x_prev, 2) + pow(y_prev, 2));
    cout.precision(15);
    cout << total_cost << endl;

    return 0;
}
