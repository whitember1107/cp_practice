#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    int a;cin>>a;
    for(int i=0; i<a; i++){
        int b; cin>>b;
        string c; cin>>c;
        int kk=c.size()-1;
        for(int j=0; j<c.size()-2; j++){
            if(c[j]==c[j+2]) kk-=1;
        }
        cout<<kk<<'\n';
    }
}
