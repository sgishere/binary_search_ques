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
int binarysearch(int arr[],int key,int n){
    int low=0;
    int high=n-1;
    while(high>=low){
        int mid=low+((high-low)/2);
        if(arr[mid]==key)return mid;
        else if(arr[mid]<key)low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        lop(N){
            cin>>arr[i];
        }
        cout<<"Enter element u want to search\n";
        int x;
        cin>>x;
        int ans=binarysearch(arr,x,N);
        ans==-1?cout<<"Element not found":cout<<"Elemnt is found at "<<ans<<" index"<<endl;
    }
return 0;

}