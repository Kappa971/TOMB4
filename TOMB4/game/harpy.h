#pragma once
#include "../global/vars.h"

void inject_harpy(bool replace);

void TriggerHarpyMissileFlame(short fx_number, long xv, long yv, long zv);
void TriggerHarpyMissile(PHD_3DPOS* pos, short room_number, short mesh);
void TriggerHarpySparks(long x, long y, long z, short xv, short yv, short zv);
void TriggerHarpyFlame(short item_number, uchar NodeNumber, uchar size);
