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
int ceil_binary_search(int arr[],int N, int key){
    int low=0;
    int high=N-1;
    int mid;
    int res;
    while(high>=low){
        mid=low+(high-low)/2;
        if(arr[mid]==key)return arr[mid];
        else if(arr[mid]<key)low=mid+1;
        else{
            res=mid;
            high=mid-1;
        }
    }
    return arr[res];
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={1,2,5,7,9,10};
    int ans=ceil_binary_search(arr,6,8);
    cout<<ans<<endl;

return 0;

}