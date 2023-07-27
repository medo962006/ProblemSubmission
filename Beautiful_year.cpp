#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
    LL t ,ttemp, x = 0 , result;
    vector<LL> vec;
    cin>> t ;
    while (true){
        t++;
        vec.clear();
        ttemp = t;
        while(ttemp > 0) {
            x = ttemp % 10;
            vec.push_back(x);
            ttemp = ttemp / 10;
        }
        set<int> setOfNumbers(vec.begin(), vec.end());
        if (setOfNumbers.size() == vec.size()){
            result = t;
            break;
        }
    }
    cout<<t;
    return 0;
}