#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,m,k;
        cin>>n>>m>>k;
        long long cost=m-1;
        long long req=n-1;
        cost+=(req)*m;
        if(k==cost){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
