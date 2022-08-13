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
int binary_search_desc(int arr[],int N,int key){
    int low=0;
    int high=N-1;
    int mid;
    while(high>=low){
        mid=low+(high-low)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]<key)high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={10,9,8,7,6,5};
    int ans=binary_search_desc(arr,6,7);
    cout<<ans<<endl;
    
return 0;

}