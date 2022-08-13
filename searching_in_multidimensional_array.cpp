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
int matSearch (vector <vector <int> > &arr, int N, int M, int X)
	{
	    int i=0;
	    int j=M-1;
	    while(i>=0 and i<N and j>=0 and j<M){
	        if(arr[i][j]==X)return 1; 
	        else if(arr[i][j]>X)j--;
	        else i++;
	    }
	    return 0;
	}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        vector<vector<int> >arr(N,vector<int>(M));
        lop(N){
            lopj(M){
                cin>>arr[i][j];
            }
        } 
        cout<<"Enter element u want to search\n";
        int X;
        cin>>X;
        matSearch(arr,N,M,X);
    }
    
return 0;

}