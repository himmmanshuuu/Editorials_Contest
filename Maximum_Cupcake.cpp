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
int main(){
	ll test;
	cin>>test;
	loop(t, test){
	string s, c;
	cin>>s;
	c = s;
	int k;
	cin>>k;
	ll sum = 0;
	for(auto i : s){
		sum += (i - '0');
	}
	for(int i = 0; i < s.length(); ++i){
		if(k > 1 && s[i] != '9'){
			sum -= (s[i] - '0');
			s[i] = '9';
			sum += 9;
			k--;
		}
		else{
			ll r = 9 - (sum - (s[i] - '0') + 9)%3;
			if(s[i] - '0' < r || i == s.length() - 1){
				s[i] = r + '0';
				break;
			}
		}
	}
	sum = 0;
	for(auto i : s){
		sum += (i - '0');
	}
	if(sum%3){ cout<<"\n"<<s<<"\n"<<k<<"\n"<<c; break; }
	else cout<<s;
	}
	return 0;
}
