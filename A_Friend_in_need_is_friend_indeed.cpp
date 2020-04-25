#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> t[10];
    t[2].push_back(2);
    t[3].push_back(3);
    t[4].push_back(3);
    t[4].push_back(2);
    t[4].push_back(2);
    t[5].push_back(5);
    t[6].push_back(3);
    t[6].push_back(5);
    t[7].push_back(7);
    t[8].push_back(2);
    t[8].push_back(2);
    t[8].push_back(2);
    t[8].push_back(7);
    t[9].push_back(3);
    t[9].push_back(3);
    t[9].push_back(2);
    t[9].push_back(7);
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(str[i] != '0' && str[i]!= '1') {
            for(auto x:t[str[i]-'0']) ans.push_back(x);
        }
    }
    sort(ans.begin(),ans.end(),greater<int>());
    for(auto x:ans)cout << x;
    cout << endl;
}
