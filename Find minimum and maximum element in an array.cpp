//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

#include<bits/stdc++.h>
#define ll long long
    ll int getMin(ll a[],int n){
    ll int mini = INT_MAX;
    for(int i = 0; i<n;i++){
        mini = min(mini,a[i]);
    }
    return mini;
}
    ll int getMax(ll a[],int n){
    ll int maxi = INT_MIN;
    for(int i = 0; i<n;i++){
        maxi = max(maxi,a[i]);
    }
    return maxi;
}
pair<long long, long long> getMinMax(long long a[], int n) {
    ll mini = getMin(a,n);
    ll maxi = getMax(a,n);
    return {mini,maxi};
}