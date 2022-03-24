#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    if(n%m!=0){
        int temp=n/m;
        cout<<m*(temp+1)-n<<endl;
    }
    else 
    cout<<"0\n";
}
return 0;
}