//BINARY SEARCH IN ROTATED SORTED ARRAY
// [4,5,6,7,1,2,3]
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
int binary_R_search(int arr[],int N){
    int low=0;
    int high=N-1;
    int mid,prev,next;
    while(high>=low){
        mid=low+(high-low)/2;
        prev=(mid+N-1)%N;
        next=(mid+1)%N;
        if(arr[mid]<=arr[prev] and arr[mid]<=arr[next])
            return N-mid; //Number of times array is rotated
        if(arr[low]<=arr[mid])low=mid; // everytime we have to go to unsorted part for searching of minimum element
        else if(arr[mid]<=arr[high])high=mid;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={5,6,7,1,2,3,4};
    int x=binary_R_search(arr,7);
    cout<<x<<endl;
    
return 0;

}