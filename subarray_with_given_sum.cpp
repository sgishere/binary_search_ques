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
void solve(){
    int sum=0;
    int N=5;
    int arr[]={0,33,2,9,40,5};
    int required_sum;
    cin>>required_sum;
         int left=1;
    int right;
    for(int i=1;i<=N;i++){
       if(sum<required_sum){sum+=arr[i];
       if(sum==required_sum){
        right=i;break;
       }
       }
       else if(sum>required_sum){
            while(sum>required_sum and left<=N){
                sum=sum-arr[left];
                left++;
            }
            if(sum==required_sum){
                right=i-1;
                break;
            }
            i--;
       }
       else{
        right=i;
        break;
       }
    }
    if(right>N or right<left)cout<<"-1\n";
    cout<<left<<" "<<right<<endl;
    cout<<endl;
    }

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    solve();
return 0;

}