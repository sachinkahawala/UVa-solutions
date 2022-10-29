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
	int r, n;
	string x;
	int count = 0;

	while (cin >> r >> n, r || n) {
		count++;

		double price = 2000000000, p;
		int reqMet = -1, rm;
		string name, nam;

		for (int i = 0; i < r; i++) {
			cin.ignore();
			getline(cin, x);
		}
		string ans;
		int ansCount=0;
		double ansValue=INF;

		while (n--) {
			getline(cin,nam);
			// scanf("%lf %d\n", &p, &rm);
			cin>>p>>rm;
			cin.ignore();
			if(rm==ansCount){
				if(p<ansValue){
					ansValue=p;
					ansCount=rm;
					ans=nam;
				}
			}
			if(rm>ansCount){
				ansCount=rm;
				ans=nam;
				ansValue=p;
			}
			// dbg2(p,rm);
			for (int i = 0; i < rm; i++) {
				getline(cin, x);
			}
		}

		if (count > 1)
			cout << endl;
		cout << "RFP #" << count << endl;
		cout << ans << endl;
	}
	// // std::istringstream F("line1\nline2\nline3");
	// int n,k;
	// int I=1;
	// while(1){
		// // map<string,int> mp;
		// set<string> s;
		// cin>>n>>k;
		// if(n==0 && k==0){
			// break;
		// }
		// string t;
		// for (int i = 0; i < n; i++) {
			// cin.ignore();
			// getline(cin,t );
		// }
		// // getline(cin,t);
		// string ans;
		// int ansCount=0;
		// double ansValue=INF;
		// forn(j,0,k){
			// string brand;
			// getline(cin,brand);
			// double p;int L;
			// scanf("%lf %d\n", &p, &L);
			// // cin>>p>>L;
			// dbg2(p,L);
			// int cnt=0;
			// // getline(cin,t);
			// // set<string> s1;
			// forn(jj,0,L){
				// getline(cin,t);
				// if(s.count(t))cnt++;
// 				
			// }
			// if(cnt==ansCount){
				// if(p<ansValue){
					// ansValue=p;
					// ansCount=cnt;
					// ans=brand;
				// }
			// }
			// if(cnt>ansCount){
				// ansCount=cnt;
				// ans=brand;
				// ansValue=p;
			// }
		// }
		// cout<<"RFP #"<<I<<endl;
		// cout<<ans<<endl;
		// cout<<endl;
		// I++;
// 		
	// }
	
}
 
int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int tst = 1;
	// cin >> tst;
	
	while (tst--) {
		solve();
	}
}