#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using poly_ll = vector <ll>;
const int N = 1e6 + 5;
namespace Poly_ftt {
	const int N = 4e6 + 5;
	const double PI = acos(-1);
	struct cpl {double x, y;};
	cpl operator + (cpl a, cpl b) {return {a.x + b.x, a.y + b.y};}
	cpl operator - (cpl a, cpl b) {return {a.x - b.x, a.y - b.y};}
	cpl operator * (cpl a, cpl b) {return {a.x * b.x - a.y * b.y, b.x * a.y + a.x * b.y};}
	int rev[N], bt;
	void dft(cpl *a, int n, int type) {
		for (int i = 1; i < n; i++) rev[i] = (rev[i >> 1] >> 1) | ((i & 1) << bt - 1);
		for (int i = 0; i < n; i++) if (i < rev[i]) swap(a[i], a[rev[i]]);
		for (int len = 2; len <= n; len <<= 1) {
			cpl wn = {cos(PI / (len >> 1)), type * sin(PI / (len >> 1))};
			for (int i = 0; i < n; i += len) { cpl w = {1, 0};
				for (int j = 0; j < (len >> 1); j++, w = w * wn) {
					cpl x = a[i + j], y = a[i + j + (len >> 1)] * w;
					a[i + j] = x + y, a[i + j + (len >> 1)] = x - y;
				}
			}
		}
	}
	cpl a[N], b[N];
	auto mul_ll(poly_ll A, poly_ll B) {
		if (!A.size() || !B.size()) return poly_ll ();
		poly_ll res(A.size() + B.size() - 1);
		int n = 1; bt = 0;
		for (; n <= A.size() + B.size(); n <<= 1, bt++);
		for (int i = 0; i < n; i++) a[i].x = i < A.size() ? A[i] : 0;
		for (int i = 0; i < n; i++) b[i].x = i < B.size() ? B[i] : 0;
		dft(a, n, 1), dft(b, n, 1);
		for (int i = 0; i < n; i++) a[i] = a[i] * b[i];
		dft(a, n, -1);
		for (int i = 0; i < (int)res.size(); i++) res[i] = (ll)(a[i].x / n + 0.5);
		return res;
	}
}
template <typename T> void read(T &x) {
	x = 0; char c = getchar();
	while (!isdigit(c)) c = getchar();
	while (isdigit(c)) x = (x << 1) + (x << 3) + c - 48, c = getchar();
}
using Poly_ftt :: mul_ll;
poly_ll operator * (poly_ll a, poly_ll b) {return mul_ll(a, b);}
const int M = 1e6;
int n, m, a[N];

int main() {
	read(n), read(m);
	for (int i = 1; i <= n; i++) read(a[i]);
	vector <ll> f(M + 1);
	for (int i = 1; i <= n; i++)
		f[a[i]]++;
	poly_ll g = f * f;
	for (int i = 1; i <= n; i++) {
		ll now = 0;
//		printf("i = %d\n", i);
		if (m - a[i] >= 0) now += g[m - a[i]] / 2;
//		printf("now = %d\n", now);
		if (m - 2 * a[i] >= 0) now -= f[m - 2 * a[i]];
//		printf("now = %d\n", now);
		if (3 * a[i] == m) now += 1;
		if (now) {
//			printf("i = %d\n", i);
			for (int j = 1; j <= n; j++) {
				if (j == i) continue;
				if (m >= a[i] + a[j] && f[m - a[i] - a[j]] - (a[i] == m - a[i] - a[j]) - (a[j] == m - a[i] - a[j])) {
					for (int k = 1; k <= n; k++) {
						if (k == i || k == j) continue;
						if (a[k] == m - a[i] - a[j]) {
							vector <int> ans(3);
							ans[0] = i, ans[1] = j, ans[2] = k;
							sort(ans.begin(), ans.end());
							printf("%d %d %d\n", ans[0], ans[1], ans[2]);
							exit(0);
						}
					}
//					exit(0);
				}
			}
//			exit(0);
		}
	}
	printf("-1\n");
	return 0;
}//
// Created by dzl on 24-11-14.
//
