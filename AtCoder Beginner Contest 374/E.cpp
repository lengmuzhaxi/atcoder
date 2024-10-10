#include<bits/stdc++.h>

using namespace std;

long long a[110],p[110],b[110],q[110];
int n,x;

bool check(long long mid){
    long long sum=0;
    for(int i=1;i<=n;++i){
        if(1.0*a[i]/p[i]>1.0*b[i]/q[i]){
            swap(a[i],b[i]);
            swap(p[i],q[i]);
        }
        long long k=ceil(1.0*mid/a[i]);
        long long mn=1e18;
        for(long long y=0;y<=min(k,100ll);y++){
            long long x=ceil(1.0*(mid-y*a[i])/b[i]);
            mn=min(mn,x*q[i]+y*p[i]);
        }
        sum+=mn;
    }
    return sum<=x;
}

int main(){
    cin>>n>>x;
    for(int i=1;i<=n;++i){
        cin>>a[i]>>p[i]>>b[i]>>q[i];
    }
    int l=1,r=1e9,best=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid)){
            l=mid+1;
            best=mid;
        }
        else{
            r=mid-1;
        }
    }
    cout<<best;
}//
// Created by dzl on 24-10-10.
//
