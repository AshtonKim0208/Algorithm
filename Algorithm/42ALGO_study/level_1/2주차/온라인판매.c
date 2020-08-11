#include <stdio.h>
int main() {
    int N, M, customer[1000], totalRevenue, sellable, price;

    scanf("%d %d", &N, &M);
    for (int i = 0; i < M; i++)
        scanf("%d", &customer[i]);   
    totalRevenue = 0;
    for (int i = 0; i < M; i++) {
        sellable = 0;
        for (int j = 0; j < M; j++) {
            if (customer[i] <= customer[j])
                sellable++;
        }
        if (sellable > N)
            sellable = N;
        if (totalRevenue < sellable * customer[i])
        {
            totalRevenue = sellable * customer[i];
            price = customer[i];
        }
    }
    printf("%d %d", price,totalRevenue);
}