// UVa 12894 - Perfecct Flag.cpp
#include <iostream>
#include <cstdio>

#include <string>
#include <cstring>
#include <sstream>

#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>

#include <algorithm>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>

#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

int caseno = 1;
#define NL '\n'
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
#define SF scanf
#define PF printf
#define PC() printf("Case %d: ", caseno++)
#define READ() freopen("in.txt", "r", stdin)
#define WRITE() freopen("out.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);

typedef long long LL;//NOTES:"%lld"
typedef unsigned long long ULL;//NOTES:"%llu"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64

#define INF 2147483647
#define MOD 1000000007
const double PI = 2 * acos(0.0);
const double EPS = 1e-11;
const int SIZE = 1e6;

int main()
{
	BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len, x0, y0, x1, y1, cx, cy, r, length, width;
	//READ();
	//WRITE();
	cin >> tcases;
	while(tcases--)
	{
		cin >> x0 >> y0 >> x1 >> y1 >> cx >> cy >> r;
		length = x1 - x0;
		width = y1 - y0;
		/// lenght : width = 10:6
		/// length : radius = 5 : 1
		if((3 * length == 5 * width) && (length == 5 * r) && (20 * (cx - x0) == 9 * length) && (2 * (cy - y0) == width))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}

