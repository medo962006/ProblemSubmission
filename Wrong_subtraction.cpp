#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
void Wrong_subtraction(LL n , LL k){
    LL x = n%10;
    if(k==0){cout<<n; return;}
    if(x == 0){ Wrong_subtraction(n/=10,k-1);}
    else{ Wrong_subtraction(n-1 , k-1);}
}
int main(){
    LL n , k , x;
    cin>>n>>k;
    Wrong_subtraction(n , k);
    return 0;
}