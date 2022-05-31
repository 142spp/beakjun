#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int n,m; cin >> n >> m;
    set<string> dl;
    vector<string> bl;
    
    while(n--){
        string s; cin >> s;
        dl.insert(s);
    }
    while(m--){
        string s; cin >> s;
        bl.push_back(s);
    }
    vector<string> ans;
    for(auto s : bl){
        if(dl.find(s)!=dl.end()) ans.push_back(s);     
    }
    cout << ans.size() << "\n";
    for(auto s : ans) cout << s << "\n";
    return 0;
    
}