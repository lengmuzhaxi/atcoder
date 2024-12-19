/*#include<bits/stdc++.h>
using namespace std;
long long h, w, x, p, q, s[510][510], ans;
bool vis[510][510];
set<pair<long long, long long>> m;
struct C{
    long long v, x, y;
};
struct cmp{
    bool operator()(const C &a, const C &b){
        return a.v > b.v;
    }
};
priority_queue<C, vector<C>, cmp> pq;
bool check(long long x, long long y){
    return x >= 1 && x <= h && y >= 1 && y <= w;
}
int main(){
    scanf("%lld%lld%lld%lld%lld", &h, &w, &x, &p, &q);
    for(long long i = 1; i <= h; ++i)
        for(long long j = 1; j <= w; ++j)
            scanf("%lld", &s[i][j]);
    ans = s[p][q];
    m.insert({p, q});
    if(check(p - 1, q))
        pq.push({s[p - 1][q], p - 1, q});
    if(check(p + 1, q))
        pq.push({s[p + 1][q], p + 1, q});
    if(check(p, q - 1))
        pq.push({s[p][q - 1], p, q - 1});
    if(check(p, q + 1))
        pq.push({s[p][q + 1], p, q + 1});
    while(!pq.empty()){
        long long c = pq.top().v;
        long long x1 = pq.top().x;
        long long y = pq.top().y;
        pq.pop();
        if(vis[x1][y])
            continue;
        vis[x1][y] = true;
        if((__int128)c * (__int128)x >= (__int128)ans)
            break;
        ans += c;
        m.insert({x1, y});
        if(check(x1 - 1, y) && m.find({x1 - 1, y}) == m.end())
            pq.push({s[x1 - 1][y], x1 - 1, y});
        if(check(x1 + 1, y) && m.find({x1 + 1, y}) == m.end())
            pq.push({s[x1 + 1][y], x1 + 1, y});
        if(check(x1, y - 1) && m.find({x1, y - 1}) == m.end())
            pq.push({s[x1][y - 1], x1, y - 1});
        if(check(x1, y + 1) && m.find({x1, y + 1}) == m.end())
            pq.push({s[x1][y + 1], x1, y + 1});
    }
    printf("%lld", ans);
}*/