#ifndef STORE_H
#define STORE_H

#include "order.h"

// Max orders (static array simulation)
#define MAX_ORD 100

// basically storing orders in an array
extern Order odarr[MAX_ORD];
extern int ocnt; // order count

// functions for storage
int addOrder(Order newo);
int findOrderById(int id);  // returns index or -1

#endif
