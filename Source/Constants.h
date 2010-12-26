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

#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

// cat src/Constants.h | sed -e 's/#define/const int/' -e 's/ [0-9]*$/ =&;/'
// chew on that --Jookia

const int mapkilleveryone = 0;
const int mapgosomewhere = 1;
const int mapkillsomeone = 2;
const int mapkillmost = 3;

enum pathtypes {wpkeepwalking, wppause};

static const char *pathtypenames[] = {"keepwalking", "pause"};

enum editortypes {typeactive, typesitting, typesittingwall, typesleeping,
		  typedead1, typedead2, typedead3, typedead4};

static const char *editortypenames[] = {
  "active", "sitting", "sitting wall", "sleeping",
  "dead1", "dead2", "dead3", "dead4"
};

const int boneconnect = 0;
const int constraint = 1;
const int muscle = 2;

const int head = 0; // DO NOT CONFLICT WITH ZLIB's variable head
const int neck = 1;
const int leftshoulder = 2;
const int leftelbow = 3;
const int leftwrist = 4;
const int lefthand = 5;
const int rightshoulder = 6;
const int rightelbow = 7;
const int rightwrist = 8;
const int righthand = 9;
const int abdomen = 10;
const int lefthip = 11;
const int righthip = 12;
const int groin = 13;
const int leftknee = 14;
const int leftankle = 15;
const int leftfoot = 16;
const int rightknee = 17;
const int rightankle = 18;
const int rightfoot = 19;

const int max_joints = 50;
const int max_frames = 50;
const int max_muscles = 100;

const int max_dialogues = 20;
const int max_dialoguelength = 20;

const int max_model_vertex = 3000;		// maximum number of vertexs
const int max_textured_triangle = 3000;		// maximum number of texture-filled triangles in a model

const int normalmode = 0;
const int motionblurmode = 1;
const int radialzoommode = 2;
const int realmotionblurmode = 3;
const int doublevisionmode = 4;
const int glowmode = 5;

const int maxplayers = 10;
#endif
