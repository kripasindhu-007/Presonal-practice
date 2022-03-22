#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b; 
    ll temp =pow(a,b);
    ll pr=pow(10,9)+7;
    cout<<temp%pr<<endl;

}
return 0;
}