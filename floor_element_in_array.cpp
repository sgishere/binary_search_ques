// FLOOR ELEMENT IS 
// arr={1,2,3,5,6,7}
// here floor(4) is 3
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
int Floor_Binary_search(int arr[],int N,int key){
    int low=0;
    int high=N-1;
    int res;
    int mid;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){res=mid;return res;}
        else if(arr[mid]<key){
            res=arr[mid];
            low=mid+1;
        }
        else  high=mid-1;   
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={1,2,4,5,8,9};
    int ans=Floor_Binary_search(arr,6,3);
    cout<<ans<<endl;

return 0;

}