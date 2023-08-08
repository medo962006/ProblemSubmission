#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll compare(char c1 , char c2){
    return min( abs((c1 - 96) - (c2 - 96)) , 26 - abs((c1 - 96) - (c2 - 96))) ;
}
int main(){
    ll sum = 0 , length;
    string x,sub;
    cin>>x;
    char c1,c2;
    length = x.length();
    for(int i = 0 ; i < length ; i++){
        if(i != 0){c2 = c1;}else{c2 = 'a';}
        c1 = x[i];
        sum+=compare(c1 , c2);
    }
    cout<<sum;
	return 0;
}
