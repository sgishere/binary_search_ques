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
// N books having Ai pages
// we have to allocate books to K students
// such that every student get a book
// load should be optimized on all the students
// arr={10,20,30,40};
bool isvalid(int arr[],int N,int K,int check){
    int sum=0;
    int students=1;
    for(int i=0;i<N;i++){
        sum+=arr[i];
        if(sum>check){
            sum=arr[i];
            students++;
        }
    }
    if(students>K)return 0;
    else return 1;
}
int binary_search(int arr[],int N,int K){
    if(K>N)return -1;
    int low=*max_element(arr,arr+N);
    int high=0;int res,mid;
    lop(N){
        high+=arr[i];
    }
    while(high>=low){
        mid=low+(high-low)/2;
        if(isvalid(arr,N,K,mid)){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={15,17,20};
    int ans=binary_search(arr,3,2);
    cout<<ans;
    
return 0;

}