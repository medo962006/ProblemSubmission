#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
    string x; cin>>x;
    if(x[0]>=97 && x[0]<=122){ x[0]-=32; }
    cout<<x;
    return 0;
}