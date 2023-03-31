#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<int> pq;
        ll ans = 0;
        int k;
        for(int i=0; i<n; i++){
            cin >> k;
            if(k==0 && (!pq.empty())){
                ans += pq.top();
                pq.pop();
            }
            else{
                pq.emplace(k);
            }
        }
        cout << ans;    
        cout << '\n';
    }
}
