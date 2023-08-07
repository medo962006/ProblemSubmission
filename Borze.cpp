#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
    ll t , length = 0;
    bool isdashed = false;
    string x;
    cin>>x;
    length = x.length();
    char c;
    vector<int> vec;
    for(int i = 0 ; i < length ; i++){
        c = x[i];
        if(c == '.'){
            if(isdashed){
                vec.push_back(1);
                isdashed = false;
            }else{
                vec.push_back(0);
                isdashed = false;
            }
        }
        if(c == '-'){
            if(isdashed){
                isdashed = false;
                vec.push_back(2);
            }else{
                isdashed = true;
            }
        }
    }
    for(auto i : vec){
        cout<<i;
    }
	return 0;
}
