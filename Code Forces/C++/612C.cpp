#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NEWLINE cout << '\n'
#define loop(n) for(int i = 0; i < n; i++)
#define INF 1000000000 // One billion

#define EXTERNAL_FILES 0
#if EXTERNAL_FILES
ifstream fin("input.txt");
ofstream fout("output.txt");
#define cin fin
#define cout fout
#endif

#define EXTERNAL_OUT 0
#if EXTERNAL_OUT 
ofstream fout("output.txt");
#define cout fout
#endif

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

inline void freqSort(vi& A) {
	vi F(3e7 + 9);
	loop(A.size()) F[A[i]]++;
	int j = 0;
	for (int i = 0; i < F.size(); i++) {
		while (F[i]--) {
			A[j++] = i;
		}
	}
}

int main()
{
	IOS;
	string s;
	cin >> s;
	stack<char> st;
	int cnt = 0;
	
	for (char c : s) {
		if (c == '(' || c == '[' || c == '{' || c == '<')
			st.push(c);
		else {
			if(!st.empty())
			if (
				(c == ')' && st.top() == '(') ||
				(c == ']' && st.top() == '[') ||
				(c == '}' && st.top() == '{') ||
				(c == '>' && st.top() == '<')
				); else cnt++;

			if (st.empty()) {
				cout << "Impossible";
				exit(0);
			}

			st.pop();
		}
	}
	if (st.empty()) cout << cnt; 
	else            cout << "Impossible";
}