/*
Copyright (C) 2003, 2010 - Wolfire Games

This file is part of Lugaru.

Lugaru is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef SETTINGS_H_
#define SETTINGS_H_

#include "Game.h"

extern float usermousesensitivity;
extern bool ismotionblur;
extern bool floatjump;
extern bool mousejump;
extern bool ambientsound;
extern int bloodtoggle;
extern bool autoslomo;
extern bool foliage;
extern bool musictoggle;
extern bool trilinear;
extern bool decals;
extern bool invertmouse;
extern float gamespeed;
extern float oldgamespeed;
extern int difficulty;
extern bool damageeffects;
extern bool texttoggle;
extern bool debugmode;
extern bool vblsync;
extern bool showpoints;
extern bool showdamagebar;
extern bool alwaysblur;
extern bool immediate;
extern bool velocityblur;
extern float volume;
extern int detail;
extern int kBitsPerPixel;
extern int kContextWidth;
extern int kContextHeight;
extern float screenwidth, screenheight;

void DefaultSettings();
void SaveSettings();
bool LoadSettings();


#endif
