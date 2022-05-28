#include <bits/stdc++.h>

using namespace std;

int ct =0,r,c;
void quad(int i, int j, int len){
    if(len == 1) {
        if(i==r && j==c){ cout << ct; exit(0);}
        ct++; return ;}

    quad(i/2,j/2,len/2);
    quad(i/2,j,len/2);
    quad(i,j/2,len/2);
    quad(i,j,len/2);

    if(i==r && j==c){
        cout << ct;
        exit(0);
    }
}

int main(){
    int n; cin >> n >> r >> c;
    quad(pow(2,n)-1,pow(2,n)-1,pow(2,n));
}