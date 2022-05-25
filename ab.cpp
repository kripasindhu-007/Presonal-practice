// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
       long long sum=0;
       
       for(int i=1;i*i<=N;i++){
           if(i%N==0){
           sum +=i;
           sum+=N/i;
       }
    }
    if(sum==2*N)
    return 1;
    else
    return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}  // } Driver Code Ends