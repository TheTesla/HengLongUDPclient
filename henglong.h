#ifndef HENGLONG_H_INCLUDED
#define HENGLONG_H_INCLUDED

#include <linux/input.h>
#include <stdio.h>
#include <inttypes.h>


typedef struct henglong_t
{
    int velocity, direction;
    int ignation, mg, fire, turretelev, turret_left, turret_right, recoil, tilt_up, tilt_down, pan_left, pan_right;
    uint8_t clisel;
    unsigned char servoff;
} henglong_t;

int CRC(int data);
int data2frame(int data);
int values2data(int velocity, int direction, int ignation, int mg, int fire, int turretelev, int turret_left, int turret_right, int recoil);
void inithenglong(henglong_t* henglong);
int event2data(henglong_t* henglong, struct input_event event);


#endif // HENGLONG_H_INCLUDED
