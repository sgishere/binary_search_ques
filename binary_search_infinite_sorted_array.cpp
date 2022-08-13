#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(n) for (int i = 0; i < n; i++)
#define lopj(n) for (int j = 0; j < n; j++)

#define all(x) x.begin(), x.end()
#define sortd(x) sort(x.rbegin(), x.rend())
#define bitcount(x) __builtin_popcount(x)

#define vin vector <int>
#define vll vector <ll>
#define pll pair <ll, ll>
#define pii pair <int, int>
#define vpll vector <pll>

using namespace std;

int binary_search(int arr[],int key){
    int low=0;
    int high=1;
    while(key>arr[high]){
        low=high;
        high=high*2;
    }
    int mid;
    while(high>=low){
        mid=low+(high-low)/2;
        if(arr[mid]==key)return mid; // to have first occurence i can write res=mid;high=mid-1; here
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // LET THIS BE INFINITE ARRAY
    const int N=100;
    int arr[N]={0};
    for(int i=30;i<100;i++)arr[i]=1;
    int ans=binary_search(arr,1);
    cout<<ans<<endl;

return 0;

}