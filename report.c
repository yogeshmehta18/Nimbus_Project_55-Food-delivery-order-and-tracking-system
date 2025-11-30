#include <stdio.h>
#include "report.h"
#include "store.h"

// average delivery time
double avgDeliveryTime() {
    if (ocnt == 0)
        return 0;

    int sum = 0;
    for (int i = 0; i < ocnt; i++)
        sum += odarr[i].dtime;

    return (double)sum / ocnt;
}

// show all orders
void showAllOrders() {
    printf("\n===== ALL ORDERS =====\n");
    for (int i = 0; i < ocnt; i++) {
        printf("[%d] %s - %s (%s)\n",
               odarr[i].oid,
               odarr[i].cname,
               odarr[i].rest,
               odarr[i].stat);
    }
}

// revenue = orders count * 100 (fake)
int totalRevenue() {
    return ocnt * 100;
}
