#include <bits/stdc++.h>

using namespace std;

vector<int> vc;

int main(){
    int n;
    while(n--){
        int c; cin >>c;
        vc.push_back(c);
    }
    sort(vc.begin(),vc.end());
    vector<pair<int,int>> count;
    count.push_back(make_pair(vc[0],1));
    for(int i=1; i<vc.size(); i++){
        if(vc[i]!=vc[i-1]) count.push_back(make_pair(vc[i],1));
        else count.back().second++;
    }

    int m;
    while(m--){

    }
}
