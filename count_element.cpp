// COUNT OF ELEMENT IN A SORTED ARRAY
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
int first_occurence(int v[],int N,int key){
    int low=0;
    int high=N-1;
    int mid;
    int ans=-1;
    while(high>=low){
        mid=low+(high-low)/2;
        if(v[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(v[mid]<key)low=mid+1;
        else high=mid-1;
    }
    return ans;
}
int last_occurence(int v[],int N,int key){
    int low=0;
    int high=N-1;
    int mid;
    int ans=-1;
    while(high>=low){
        mid=low+(high-low)/2;
        if(v[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(v[mid]<key)low=mid+1;
        else high=mid-1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={1,2,3,4,5,5,5};
    int x=last_occurence(arr,7,4)-first_occurence(arr,7,4)+1;
    cout<<x<<endl;
    
return 0;

}