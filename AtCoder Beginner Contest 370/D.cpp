#include<iostream>
#include<vector>
using namespace std;
int H,W,Q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>H>>W>>Q;
    if(H==1&&W>3e5)
    {
        cout<<W-Q<<endl;
        return 0;
    }
    else if(W==1&&H>3e5)
    {
        cout<<H-Q<<endl;
        return 0;
    }
    vector<vector<bool> >A(H,vector<bool>(W));
    for(;Q--;)
    {
        int R,C;cin>>R>>C;R--,C--;
        if(!A[R][C])
        {
            A[R][C]=true;
        }
        else
        {
            int u=R,d=R,l=C,r=C;
            while(u>0&&A[u][C])u--;
            A[u][C]=true;
            while(d<H-1&&A[d][C])d++;
            A[d][C]=true;
            while(l>0&&A[R][l])l--;
            A[R][l]=true;
            while(r<W-1&&A[R][r])r++;
            A[R][r]=true;
        }
    }
    int ans=0;
    for(int i=0;i<H;i++)for(int j=0;j<W;j++)if(!A[i][j])ans++;
    cout<<ans<<endl;
}
//
// Created by dzl on 24-9-11.
//
