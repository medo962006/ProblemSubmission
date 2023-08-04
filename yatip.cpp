#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
    LL n , x , y;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>x>>y;
        cout<<(abs(x - y) + 9)/10<<endl;
    }
    
	return 0;
}