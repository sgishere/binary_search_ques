// SEARCHING IN NEARLY SORTED ARRAY
// NEARLY SORTED MEANS ELEMENT CAN BE AT i-1,i,i+1
// 10 30 20 40 50 is nearly sorted array
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
int NSA_binary_search(int arr[],int N,int key){
    int low=0;
    int high=N-1;
    int mid;
    int res;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid-1]==key and mid-1>=low)return mid-1;
        if(arr[mid+1]==key and mid+1<=high)return mid+1;

        else if(arr[mid]<key)low=mid+2;
        else if(arr[mid]>key)high=mid-2;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={10,20,40,30,50};
    int a=NSA_binary_search(arr,5,40);
    int b=NSA_binary_search(arr,5,10);
    int c=NSA_binary_search(arr,5,20);
    int d=NSA_binary_search(arr,5,30);
    int e=NSA_binary_search(arr,5,50);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
return 0;

}