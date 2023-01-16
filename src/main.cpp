#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto v = vector<int>(26, 0);
	string a, b;
	cin >> a >> b;

	for (const auto& x : a) {
		++v[x - 'a'];
	}

	for (const auto& x : b) {
		--v[x - 'a'];
	}

	auto ans = int{ 0 };
	for (const auto& x : v) {
		if (0 < x) {
			ans += x;
		}
		else if (x < 0) {
			ans -= x;
		}
	}

	cout << ans;

	return 0;
}