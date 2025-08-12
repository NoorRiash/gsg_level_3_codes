
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl return
#define SLAY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dd double
#define ld long double
#define PI acos(-1)

 
int n,c=0;
vector<string>v{"Football","Swimming","Running"};
 
void rec(int d,string p,vector<string>s) {

    if(d==n) {
        for(string c:s) {
            cout<<c<<" ";
        }
        cout<<"\n";
        c++;
        return ;
    }

    for(string w:v) {
        if(w!=p) {
            s.push_back(w);
            rec(d+1,w,s);
            s.pop_back();
        }
    }

}



void solve() {

    cin>>n;
    rec(0,"",{});
    cout<<c;
 
}


int main(){
    SLAY
    int t=1; // cin>>t;
    while(t--) solve();
}

