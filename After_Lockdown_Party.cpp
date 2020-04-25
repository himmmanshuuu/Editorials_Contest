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
 fastm_fast;
 int t;
 cin >> t;
 while(t--)
  {
		int a ,b , c;
		cin >> a >> b >> c;
		
		cout<< a + (c-1)*b << endl;
  }
 return 0;
 }
