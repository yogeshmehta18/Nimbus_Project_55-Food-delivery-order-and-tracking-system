#ifndef UPDATE_H
#define UPDATE_H

#include "order.h"

// update the status (very basic human-coded logic)
void updateStatus(Order *o, const char *newStatus);

// calculate delay/bonus based on delivery time (very rough logic)
int calcDelayOrBonus(const Order *o);

#endif
