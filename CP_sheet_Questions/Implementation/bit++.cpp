#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            sum++;
            continue;
        }
        if(s=="--X" || s=="X--"){
            sum--;
            continue;
        }
    }
    cout<< sum;


cout<<endl;
return 0;
}