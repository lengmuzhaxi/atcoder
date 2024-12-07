/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; // 水添加的次数
    cin >> N;

    vector<pair<int, int>> events(N); // 用于存储每次添加水的时间和水量
    for (int i = 0; i < N; ++i) {
        cin >> events[i].first >> events[i].second; // 输入时间 Ti 和水量 Vi
    }

    int current_time = 0;  // 当前时间
    int water = 0;         // 加湿器中的水量

    // 遍历每个事件
    for (int i = 0; i < N; ++i) {
        int time = events[i].first; // 当前事件发生的时间
        int volume = events[i].second; // 当前事件添加的水量

        // 计算从上一次加水到这次加水的时间差
        int time_gap = time - current_time;

        // 计算漏水后剩下的水量
        water = max(0, water - time_gap);

        // 添加当前事件的水量
        water += volume;

        // 更新当前时间
        current_time = time;
    }

    // 输出最终水量
    cout << water << endl;

    return 0;
}
*/
