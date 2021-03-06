// Codeforces 898C - Phone Numbers.cpp

/// Template by Zayed ///

/// #include <bits/stdc++.h>
#include <iostream>
#include <cstdio>

#include <string>
#include <cstring>
#include <sstream>

//#include <tuple>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
//#include<unordered_map>
#include <set>
//#include<unordered_set>

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdlib>

using namespace std;
int caseno = 1;

#define NL '\n'
#define SF scanf
#define PF printf
#define PC() printf("Case %d: ", caseno++)//NOTES:printf
#define BUG cout << "\n!!!WHERE IS YOUR FOCUS!!!\n"//NOTES:cout
//#define PC cout << "Case "//NOTES:cout
//#define CN cout << caseno++ << ": "//NOTES:cout
#define CLR(ar) memset(ar, 0, sizeof(ar))
#define SET(ar) memset(ar, -1, sizeof(ar))
#define READ() freopen("input.txt", "r", stdin)
#define WRITE() freopen("output.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);

typedef long long LL;//NOTES:"%lld"
typedef unsigned long long ULL;//NOTES:"%llu"

#define INTMAX (1LL << 31) - 1
#define LLMAX (1LL << 63) - 1
#define MOD 1000000007		    // (10^9 + 7)
#define PRIME 999998727899999   // (largest prime below 10^16)
#define PB push_back
#define pii pair<int, int>
#define pic pair<int, char>
#define pci pair<char, int>
#define pLL pair<LL, LL>
#define pis pair<int, string>
#define psi pair<string, int>
#define pss pair<string, string>
//#define tiii tuple<int, int, int>
#define PI 2 * acos(0.0)
#define EPS 1e-11


// Numeric Functions
template < class T > inline void SWAP(T &a, T &b) { T t = a; a = b; b = t; }
inline LL POW(LL base, LL power){
	LL res = base; if (power == 0) return 1;
	for (int I = 0; I < power - 1; I++) res *= base; return res;
}


// Translator Functions
int ToInt(string s) { int r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:ToInt(
double ToDouble(string s) { double r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:ToDouble(
string ToString(int n) { string s; stringstream convert; convert << n; s = convert.str(); return s; }//NOTES:ToString(


/*
*******4 Direction Array*******
int dx[] = {0, 0, - 1, 1}, dy[] = {-1, 1, 0, 0};
*******8 Direction Array*******
int dx[] = {0, 0, -1, +1, -1, -1, +1, +1}, dy[] = {-1, +1, 0, 0, -1, +1, -1, +1};
********Knight Moves********
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2}, dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};
*/


const int SIZE = 20 + 10;
vector<string> G[SIZE], ans[SIZE];
string X, Y, name, phone;
map<string, int> MAP1;
map<int, string> MAP2;




int main()
{
	BOOST
	///READ();
	///WRITE();
	int T, I, J, K, N, n, m, k, cnt = 0, len, id = 0, idx, SZ, lenX, lenY, flag;

	cin >> n;
	for(I = 1; I <= n; I++)
	{
		cin >> name;

		if(MAP1.find(name) == MAP1.end())
		{
			MAP1[name] = ++id;
			MAP2[id] = name;
			idx = id;
		}
		else
			idx = MAP1[name];


		cin >> m;
		for(J = 1; J <= m; J++)
		{
			cin >> phone;

			SZ = G[idx].size();
			for(K = 0; K < SZ; K++)
			{
				if(G[idx][K] == phone)
					break;
			}


			if(K == SZ)
				G[idx].PB(phone);

		}

	}


	for(I = 1; I <= MAP1.size(); I++)
	{
		SZ = G[I].size();

		for(J = 0; J < SZ; J++)
		{
			X = G[I][J];

			flag = 0;
			for(K = 0; K < SZ; K++)
			{
				if(J == K)
					continue;

				Y = G[I][K];

				lenX = X.length();
				lenY = Y.length();

				if(lenX > lenY)
					continue;

				while(lenX >= 0 && lenY >= 0)
				{
					if(X[lenX] != Y[lenY])
						break;

					lenX--;
					lenY--;
				}

				if(lenX < 0)
					flag = 1;

			}

			if(!flag)
				ans[I].PB(X);


		}

	}


	cout << MAP1.size() << NL;
	for(I = 1; I <= MAP1.size(); I++)
	{
		SZ = ans[I].size();

		cout << MAP2[I] << ' ' << SZ;
		for(J = 0; J < SZ; J++)
			cout << ' ' << ans[I][J];

		cout << NL;
	}



	return 0;
}




