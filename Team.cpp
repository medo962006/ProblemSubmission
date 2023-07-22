#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
    LL n , counter = 0, result = 0;
    cin>>n;
    vector<LL> vec(3);
    for(int i = 0 ; i < n ; i++){
        vec.clear();
        counter = 0;
        for(int j = 0 ; j < 3 ; j++){
            cin>>vec[j];
            if(vec[j] == 1){
                counter++;
            }
        }
        if(counter>=2){
            result++;
        }
    }
    cout<<result;
    return 0;
}