#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
    LL n , m;
    cin>>n>>m;
    bool isleft = true;
    string hashline(m  , '#');
    string dotline (m  , '.') , r;
    r = dotline;
    for(int i = 0 ; i < n;i++){
        if(i%2==0){
            cout<<hashline<<endl;
        }else{
            if(!isleft){
                dotline[0] =   '#';
                isleft = true;
            }else{
                dotline[m-1] = '#';
                isleft = false;
            }
            cout<<dotline<<endl;
            dotline = r;
        }
    }
	return 0;
}