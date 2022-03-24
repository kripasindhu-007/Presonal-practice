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
    int a;
    cin>>a;
    int num[a];
    for(int i=0;i<a;i++)
    cin>>num[i];
    int max=num[0];
    int min=num[0];
    for(int j=0;j<a;j++){
        if(max<=num[j])
        max=num[j];
        if(min>=num[j])
        min=num[j];
    }
    cout<<max-min<<endl;
}
return 0;
}