#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define loop(i,n) for(int i=0;i<(n);i++)
#define rep(a,b,i) for(int i=(a);i<=(b);i++)
#define ford(a,b,i) for(int i=(a);i>=(b);i--)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fastm_fast ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
using namespace std;
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define pb push_back
#define mp make_pair

int main()
{
	ll n, m;
	cin >> n >> m;
	ll q;
	cin >> q;
	while(q--)
  {
		ll a, b;
		cin >> a >> b;
		ll l, r, u, d;
		l = b;
		r = m - b + 1;
		u = a;
		d = n - a + 1;
		ll ans = min(l, min(r, min(u, d)));
		ans = max(1LL, (ans+(ans%2))/2);
		cout<<ans<<endl;
	}
	return 0;
}
