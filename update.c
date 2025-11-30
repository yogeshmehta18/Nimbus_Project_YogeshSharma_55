#include <string.h>
#include "update.h"

// update status
void updateStatus(Order *o, const char *newStatus) {
    // just replace it — simple
    strcpy(o->stat, newStatus);
}

// delivery delay or bonus (demo logic)
int calcDelayOrBonus(const Order *o) {
    // random logic: if delivery time > 40 mins = delay
    if (o->dtime > 40)
        return -20;   // penalty
    else
        return 10;    // bonus
}
