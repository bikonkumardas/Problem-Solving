#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll arr[q+5];
    ll sum=0;
    ll cnt=0;
    for(int i=0;i<q;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+q);

    for(int i=0;i<q;i++)
    {
        cout<<arr[i]<<" ";
        sum+=arr[i];
        //cout<<sum<<endl;
        if(sum<q)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
