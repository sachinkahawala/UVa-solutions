#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define clr(x) memset(x, 0, sizeof(x))
#define all(a) a.begin(),a.end()
#define s second
#define f first
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define forn(i, a,b) for(int i = int(a); i < int(b); ++i)
#define forn_r(i, b, a) for(int i = int(b); i > int(a); i--)
#define trav(a,x) for (auto& a : x)
#define pA(array, length) for(int i = 0; i < length; i++) cout<< array[i] << (i == length - 1 ? '\n' : ' '); 
#define print(x) cout << x << '\n'
#define print2(x, y) cout << x << ' ' << y << '\n'
#define dbg(x) cout << #x << "=" << x << endl
#define dbg2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
template<class T> bool chmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool chmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
using namespace std;
typedef long long ll; 
const int INF = INT_MAX;
const ll LNF  = LONG_LONG_MAX;
inline int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
inline ll  gcd(ll  a, ll  b) { return b ? gcd(b, a % b) : a; }
inline int lcm(int a, int b) { return a * b / gcd(a, b); }
 

bool swap(string cur, string ne){
	if(cur[1]=='x' && ne[0]=='-' ) return 1;
	if(cur[1]=='y' && ne[1]=='y' && ne[0]=='+') return 1;
	if(cur[1]=='z' && ne[1]=='z' && ne[0]=='+') return 1;
	return 0;
}
 
void solve() {
	int n;
	while(cin>>n, n!=0	){
		string cur, pre;
		string dir = "+x";
		forn(i,0,n-1){
			cin>>cur;
			if(cur=="No") continue;
			if(swap(dir,cur)){
				if(dir[0]=='+') dir[0]='-';
				else{
					dir[0]='+';
				}
			}
			if(dir[1] == 'x') dir[1] = cur[1];
            else if(dir[1] == 'y' && cur[1] == 'y') dir[1] = 'x';
            else if(dir[1] == 'z' && cur[1] == 'z') dir[1] = 'x';
            
        	
			
		}
		print(dir);
	}
	
	
	
}
 
int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int tst = 1;
	// cin >> tst;
	
	while (tst--) {
		solve();
	}
}