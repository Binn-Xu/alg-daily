#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1000010;

int n, k;
int a[N];
int q[N];

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i ++ ) scanf("%d", &a[i]);

    int hh=0,tt=-1;

    for (int i = 0; i < n; i++)
    {
        while(hh<=tt&&q[hh]<=(i-k)) hh++;
        while(hh<=tt&&a[q[tt]]>=a[i]) tt--;
        q[++tt]=i;
        if(i>=k-1)  printf("%d ",a[q[hh]]);
    }
    puts("");
    hh=0,tt=-1;
    for (int i = 0; i < n; i++)
    {
        while(hh<=tt&&q[hh]<=(i-k)) hh++;
        while(hh<=tt&&a[q[tt]]<=a[i]) tt--;
        q[++tt]=i;
        if(i>=k-1) printf("%d ",a[q[hh]]);
    }
    puts("");
    return 0;
}
