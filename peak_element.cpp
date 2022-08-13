// BINARY SEARCH ON UNSORTED ARRAY
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
int peek_element(int arr[],int N){
    int low=0;
    int high=N-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid>0 and mid<N-1){
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
            return mid;
            else if(arr[mid+1]>arr[mid]){
                low=mid+1;
            }
            else if(arr[mid-1]>arr[mid]){
                high=mid-1;
            }
        }
        else if(mid==0){
            if(arr[0]>arr[1])return 0;
            else return 1;
        }
        else if(mid==N-1){
            if(arr[N-1]>arr[N-2])return  N-1;
            else return N-2;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={1};
    int ans=peek_element(arr,1);
    cout<<ans<<endl;
    
return 0;

}