#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

double p[105];

int main()
{
    int c;
    scanf("%d", &c);
    while(c--)
    {
        int n;
        double W, V;
        scanf("%d%lf%lf", &n, &V, &W);
        for(int i = 0; i < n; i++)
        {
            scanf("%lf", &p[i]);
        }
        sort(p, p + n);
        double cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if((cnt1 * cnt2 + V * p[i]) <= W * (cnt2+V))
            {
                cnt1 = (cnt1 * cnt2 + V * p[i]) / (cnt2 + V);
                cnt2 += V;
            }
        }
        printf("%d %.2lf\n", cnt2, cnt1 / 100.0);
    }
    return 0;
}