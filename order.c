#include <stdio.h>
#include <string.h>
#include "order.h"

// print order in readable format
void showOrder(const Order *o) {
    // informal comments to show human behavior
    printf("\n--- Order Details ---\n");
    printf("ID: %d\n", o->oid);
    printf("Customer: %s\n", o->cname);
    printf("Restaurant: %s\n", o->rest);
    printf("Status: %s\n", o->stat);
    printf("Delivery Time: %d mins\n", o->dtime);
}

// manually copying like a beginner avoiding memcpy
void copyOrder(Order *dst, const Order *src) {
    dst->oid = src->oid;
    strcpy(dst->cname, src->cname);
    strcpy(dst->rest, src->rest);
    strcpy(dst->stat, src->stat);
    dst->dtime = src->dtime;
}
