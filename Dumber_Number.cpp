#include <bits/stdc++.h> 
using namespace std; 
  
int countSquares(int a, int b) 
{ 
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1); 
} 

int main() 
{ 
    int t;
    cin >> t;
    while(t--){
        
    int l , r;
    cin >> l >> r ;
    cout << countSquares(l,r) << endl;
    }
    return 0; 
} 
