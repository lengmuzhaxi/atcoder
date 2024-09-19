#include<iostream>
#include<cstdio>

const int N = 1e5 + 5;
int cnt;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        printf("%d ",1<<k-1);
        cnt = 1;
        for(int i = 2;i <= k;++i)
        {
            if(cnt == n)break;
            for(int j = 0;j < (1<<i-2);++j)
            {
                if(cnt == n)break;
                printf("%d ",(1<<k-1) + (j<<(k-i+1)) + (1<<k-i));
                ++cnt;
            }
        }
        for(int i = cnt + 1;i <= n;++i)printf("1 ");
        putchar('\n');
    }
}