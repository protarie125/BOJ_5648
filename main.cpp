#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
vl ans;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  string s;
  for (auto i = 0; i < n; ++i) {
    cin >> s;

    reverse(s.begin(), s.end());

    auto iss = istringstream{s};
    ll x;
    iss >> x;

    ans.push_back(x);
  }

  sort(ans.begin(), ans.end());

  for (const auto& x : ans) {
    cout << x << '\n';
  }

  return 0;
}