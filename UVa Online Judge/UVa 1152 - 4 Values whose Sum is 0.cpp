// UVa 1152 - 4 Values whose Sum is 0.cpp

/// Template by Zayed ///

///************************************************************///
/// #include <bits/stdc++.h>
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
#include<unordered_map>
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
#include <ctime>
///************************************************************///
using namespace std;
int caseno = 1;
///************************************************************///
#define NL '\n'
#define SF scanf
#define PF printf
#define PC() printf("Case %d: ", caseno++)//NOTES:printf
#define PC cout << "Case "//NOTES:cout
#define CN cout << caseno++ << ": "//NOTES:cout
#define CLR(ar) memset(ar, 0, sizeof(ar))
#define SET(ar) memset(ar, -1, sizeof(ar))
#define READ() freopen("in.txt", "r", stdin)
#define WRITE() freopen("out.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
///************************************************************///
typedef long long LL;//NOTES:"%lld"
typedef unsigned long long ULL;//NOTES:"%llu"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64
///************************************************************///
#define INF (1 << 31) - 1
#define MOD 1000000007
#define pii pair<int, int>
#define pic pair<int, char>
#define pci pair<char, int>
#define pLL pair<LL, LL>
#define pis pair<int, string>
#define psi pair<string, int>
#define PI 2 * acos(0.0);
#define EPS 1e-11;
///************************************************************///
// Numeric Functions
template < class T > inline void SetMax(T &a, T b) { if (b > a) a = b; }//NOTES:checkmax(
template < class T > inline void SetMin(T &a, T b) { if (b < a) a = b; }//NOTES:checkmin(
template < class T > inline T MAX(T a, T b) { return (a > b) ? a : b; }//NOTES:return max(
template < class T > inline T MIN(T a, T b) { return (a < b) ? a : b; }//NOTES:return min(
template < class T > inline T SQRT(T x) { return x * x; }//NOTES:return square root(
template < class T > inline T FABS(T a) { return a < 0 ? a * (-1) : a; }//NOTES:return absolute value(
template < class T > inline void SWAP(T &a, T &b) { T t = a; a = b; b = t; }
template< class T > bool Inside(T a, T b, T c) { return a <= b && b <= c; }
inline LL POW(LL base, LL power){
	LL I, res = base; if (power == 0) return 1;
	for (I = 0; I < power - 1; I++) res *= base; return res;
}
// Translator Functions
bool IsUpperCase(char c) { return c >= 'A' && c <= 'Z'; }//NOTES: IsUpperCase(
bool IsLowerCase(char c) { return c >= 'a' && c <= 'z'; }//NOTES: IsLowerCase(
bool IsVowel(char c) { return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); }//NOTES: IsVowel(
bool IsLetter(char c) { return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'; }//NOTES: IsLetter(
bool IsDigit(char c) { return c >= '0' && c <= '9'; }//NOTES:IsDigit(
char ToLowerCase(char c) { return (IsUpperCase(c)) ? (c + 32) : c; }//NOTES: ToLowerCase(
char ToUpperCase(char c) { return (IsLowerCase(c)) ? (c - 32) : c; }//NOTES: ToUpperCase(
int ToInt(string s) { int r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:ToInt(
double ToDouble(string s) { double r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:ToDouble(
string ToString(int n) { string s; stringstream convert; convert << n; s = convert.str(); return s; }//NOTES:ToString(
///************************************************************///

/*
*******4 Direction Array*******
int dx[] = {0, 0, - 1, 1}, dy[] = {-1, 1, 0, 0};
*******8 Direction Array*******
int dx[] = {0, 0, -1, +1, -1, -1, +1, +1}, dy[] = {-1, +1, 0, 0, -1, +1, -1, +1};
********Knight Moves********
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2}, dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};
*/

const int SIZE = 4000 + 10;
int A[SIZE], B[SIZE], C[SIZE], D[SIZE];
unordered_map<int, int> MAP1;


int main()
{
	///BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len, sum, AB, CD;
	///READ();
	///WRITE();

	SF("%d", &tcases);
	while(tcases--)
	{

		MAP1.clear();

		SF("%d", &n);

		for(I = 0; I < n; I++)
			SF("%d%d%d%d", &A[I], &B[I], &C[I], &D[I]);


		sum = 0;
		for(I = 0; I < n; I++)
		{
			for(J = 0; J < n; J++)
			{
				sum = A[I] + B[J];
				MAP1[sum]++;
			}
		}

		sum = 0, cnt = 0;
		for(I = 0; I < n; I++)
		{
			for(J = 0; J < n; J++)
			{
				sum = C[I] + D[J];
				sum = sum * (-1);

				if(MAP1[sum] != 0)
					cnt += MAP1[sum];

			}
		}

		PF("%d\n", cnt);

		if(tcases)
			PF("\n");
	}

	return 0;
}
