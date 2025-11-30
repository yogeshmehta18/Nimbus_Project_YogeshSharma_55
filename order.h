#ifndef ORDER_H
#define ORDER_H

// Keeping order structure simple but human-like
typedef struct {
    int oid;            // order id (kept short on purpose)
    char cname[50];     // customer name
    char rest[50];      // restaurant name
    char stat[20];      // status like "Placed", "OnWay", etc.
    int dtime;          // delivery time in minutes
} Order;

// Function prototypes
void showOrder(const Order *o);     // display single order
void copyOrder(Order *dst, const Order *src); // manual copy like a human would do

#endif
