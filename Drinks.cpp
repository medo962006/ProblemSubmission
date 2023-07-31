#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main() {
    long double x , result , n , pureJuice = 0;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>x; pureJuice+=x;
    }
    result = ((pureJuice/100)/n)*100;
    cout<< result;
    return 0;
}