#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool compare(LL x , LL y , LL z ) {
    if(x+y > z && z + y > x && z + x > y){
        return true;
    }else{
        return false;
    }
}
int main(){
    LL a;
    vector<LL> vec;
    for(int i = 0 ; i < 3 ; i++){
        cin>>a; vec.push_back(a);
    }
    LL sum = 0;
    for(int i = 0 ; i < 3 ; i++){
        sum+=vec[i];
    }

    LL distance = 0;
    sort(vec.begin(), vec.end());
    for(int i = 0 ; i < 3 ; i++){
        distance += abs(vec[i] - vec[1]);
    }
    cout<<distance;
	return 0;
}