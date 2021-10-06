#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int p[105];

int main()
{
    int c;
    scanf("%d", &c);
    while(c--)
    {
        int n, V, W;
        scanf("%d%d%d", &n, &V, &W);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]);
        }
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(p[i] <= W)
            {
                cnt1 += p[i];
                cnt2 += V;
            }
            else if((((cnt1 + p[i]) * 1.0) / cnt2) <= V * 1.0)
            {
                cnt1 += p[i];
                cnt2 += V;
            }
        }
        printf("%d %.2f\n", cnt2, (cnt1 * 1.0) / cnt2);
    }
    return 0;
}