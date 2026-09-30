#include <stdio.h>

int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize <= 1)
        return 0;

    int minprice = prices[0];
    int maxprofit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minprice)
        {
            minprice = prices[i];
        }
        else if (prices[i] - minprice > maxprofit)
        {
            maxprofit = prices[i] - minprice;
        }
    }

    return maxprofit;
}

int main()
{

    int prices[] = {7, 1, 5, 3, 6, 4};
    int pricesSize = 6;

    int result = maxProfit(prices, pricesSize);

    printf("Maximum Profit: %d\n", result);

    return 0;
}