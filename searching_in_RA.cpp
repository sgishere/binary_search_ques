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
int no_of_rotation(int arr[],int N){
    int low=0;
    int high=N-1;
    int mid,next,prev;
    while(low<=high)
    {   
        int mid=low+(high-low)/2;
        prev=(mid+N-1)%N;
        next=(mid+1)%N;
        if(arr[mid]<=arr[prev] and arr[mid]<=arr[next])
        return N-mid;
        
        if(arr[low]<=arr[mid])low=mid;
        else if(arr[mid]<=arr[high])high=mid;
    }
    return -1;
}
int binary_search(int arr[],int low,int high,int key){
    int mid;
    while(high>=low){
        mid=low+(high-low)/2;
        if(arr[mid]==key)return mid;
       else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int binary_search_RA(int arr[],int N,int key){
    int min_index=N-no_of_rotation(arr,N);
    int a=binary_search(arr,0,min_index-1,key);
    int b=binary_search(arr,min_index,N-1,key);
    if(a==-1 and b==-1)return -1;
    else return max(a,b);
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={5,6,7,8,9,1,2,3,4};
    // SAY WE HAVE TO FIND 8
    int ans=binary_search_RA(arr,9,8);
    cout<<ans<<endl;
return 0;

}