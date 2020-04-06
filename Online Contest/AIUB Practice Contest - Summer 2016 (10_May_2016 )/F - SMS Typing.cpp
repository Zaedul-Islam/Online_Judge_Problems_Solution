// F - SMS Typing.cpp
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

#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>

#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
#include <ctime>

int caseno = 1;
#define NL '\n'
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
#define sf scanf
#define pf printf
#define sf1(x) scanf("%d",&x)
#define pf1(x) printf("%d",x)
#define PC() printf("Case #%d: ", caseno++)
#define READ() freopen("in.txt", "r", stdin)
#define WRITE() freopen("out.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);
using namespace std;

// BEGINTEMPLATE_BY_ZAYED
typedef unsigned long long ULL;//NOTES:"%llu"
typedef unsigned long long uint64;//NOTES:uint64
typedef long long LL;//NOTES:"%lld"
typedef long long int64;//NOTES:int64

template<class T> inline void checkmax(T &a, T b){ if (b > a) a = b; }//NOTES:checkmax(
template<class T> inline void checkmin(T &a, T b){ if (b < a) a = b; }//NOTES:checkmin(
template<class T> inline T MAX(T a, T b){ return (a > b) ? a : b; }
template<class T> inline T MIN(T a, T b){ return (a < b) ? a : b; }
template<class T> inline T sqr(T x){ return x * x; }//NOTES:square
template<class T> inline T fABS(T a) { return a < 0 ? a * (-1) : a; }
template<class T> inline void SWAP(T &a, T &b) { T t = a; a = b; b = t; }
inline LL POW(LL base, LL power){
	LL I, res = base; if (power == 0) return 1;
	for (I = 0; I < power - 1; I++) res *= base; return res;
}
//Translator
bool isUpperCase(char c){ return c >= 'A' && c <= 'Z'; }//NOTES: isUpperCase(
bool isLowerCase(char c){ return c >= 'a' && c <= 'z'; }//NOTES: isLowerCase(
bool isVowel(char c) { return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); }//NOTES: isVowel(
bool isLetter(char c){ return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'; }//NOTES: isLetter(
bool isDigit(char c){ return c >= '0' && c <= '9'; }//NOTES:isDigit(
char toLowerCase(char c){ return (isUpperCase(c)) ? (c + 32) : c; }//NOTES: toLowerCase(
char toUpperCase(char c){ return (isLowerCase(c)) ? (c - 32) : c; }//NOTES: toUpperCase(
int toInt(string s){ int r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:toInt(
double toDouble(string s){ double r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:toDouble(
string toString(int n){ string s; stringstream convert; convert << n; s = convert.str(); return s; }//NOTES:toString
// ENDTEMPLATE_BY_ZAYED

#define INF 2147483647
#define MOD 1000000007
const double PI = 2 * acos(0.0);
const double EPS = 1e-11;
const int SIZE = 110;

char s[SIZE];

int main()
{
	//BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len;
	//READ();
	//WRITE();
	char ch;
	sf("%d%c", &tcases, &ch);
	while(tcases--)
	{
		cin.getline(s, SIZE);
		len = strlen(s);

		cnt = 0;
		for(I = 0; I < len; I++)
		{
			if(s[I] == 'a' || s[I] == 'd' || s[I] == 'g' || s[I] == 'j' || s[I] == 'm' || s[I] == 'p' || s[I] == 't' || s[I] == 'w' || s[I] == ' ')
				cnt++;
			else if(s[I] == 'b' || s[I] == 'e' || s[I] == 'h' || s[I] == 'k' || s[I] == 'n' || s[I] == 'q' || s[I] == 'u' || s[I] == 'x')
				cnt += 2;
			else if(s[I] == 'c' || s[I] == 'f' || s[I] == 'i' || s[I] == 'l' || s[I] == 'o' || s[I] == 'r' || s[I] == 'v' || s[I] == 'y')
				cnt += 3;
			else if(s[I] == 's' || s[I] == 'z')
				cnt += 4;
		}
		PC();
		pf("%d\n", cnt);
	}

	return 0;
}