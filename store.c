#include <string.h>
#include "store.h"

// global arrays like students usually do
Order odarr[MAX_ORD];
int ocnt = 0;

// add a new order to the list
int addOrder(Order newo) {
    if (ocnt >= MAX_ORD) {
        // too many orders lol
        return -1;
    }
    odarr[ocnt] = newo;  // easy direct copy
    ocnt++;
    return 0;
}

// find order by ID
int findOrderById(int id) {
    for (int i = 0; i < ocnt; i++) {
        if (odarr[i].oid == id) {
            return i;
        }
    }
    return -1; // not found
}
