#include <stdio.h>
#include "store.h"
#include "order.h"
#include "update.h"
#include "report.h"

int main() {
    Order o1 = {1, "Aarav", "PizzaHub", "Placed", 30};
    Order o2 = {2, "Simran", "Burger King", "OnWay", 45};

    addOrder(o1);
    addOrder(o2);

    // update example
    int idx = findOrderById(2);
    if (idx != -1) {
        updateStatus(&odarr[idx], "Delivered");
    }

    showAllOrders();
    printf("\nAverage Delivery Time: %.2f mins\n", avgDeliveryTime());
    printf("Total Revenue: %d\n", totalRevenue());

    return 0;
}
