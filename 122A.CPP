#include <bits/stdc++.h>

bool kt(unsigned int x) {
    while (x!=0)
    {
        if ((x%10!=4)&&(x%10!=7))
            return false;
        x/=10;
    }
    return true;
}
int main() {
    unsigned int n;
    scanf("%d", &n);
    if (kt(n))
    {
        printf("YES");
        return 0;
    }
    else
    {
        for (int i=2; i<=floor(sqrt(n)); i++)
            if (((kt(i))||kt(n/i))&& (n%i ==0))
            {
                printf("YES");
                return 0;
            }
        printf("NO");
        return 0;
    }
    return 0;
}
