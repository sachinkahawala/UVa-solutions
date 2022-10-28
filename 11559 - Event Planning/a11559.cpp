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
 


 
void solve() {
	int N, B, H, W;
    while (cin >> N >> B >> H >> W)
    {
    	int cost=INF;
    	forn(i,0,H){
    		int p;
    		cin>>p;
    		vector<int> a(W);
    		forn(j,0,W){
    			cin>>a[j];
    			if(a[j]>=N && N*p<=B){
    				chmin(cost,N*p);
    			}
    		}
    	}
    	if(cost==INF){
    		cout<<"stay home"<<endl;
    	}
    	else{
    		print(cost);
    	}
    	
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