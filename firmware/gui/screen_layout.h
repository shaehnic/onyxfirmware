#ifndef OS100_LAYOUT_H
#define OS100_LAYOUT_H

#include "safecast_wirish_types.h"
#include <stdint.h>

#define TEXT_LENGTH 25
#define SCREEN_COUNT 25

#define ITEM_TYPE_MENU          0  // A normal menu item
#define ITEM_TYPE_LABEL         1  // A static label, can not be changed
#define ITEM_TYPE_SELECTION     3  // An item selection, currently not implemented
#define ITEM_TYPE_VARLABEL      4  // A variable label, can be set to a value in software
#define ITEM_TYPE_GRAPH         5  // System graph.
#define ITEM_TYPE_HEAD          6  // Display HUD. Shows CPM etc.
#define ITEM_TYPE_MENU_ACTION   7  // selection triggers a GUI event, which the Controller receives.
#define ITEM_TYPE_VARNUM        8  // Variable single number
#define ITEM_TYPE_DELAY         9  // A delay, basically a countdown timer.
#define ITEM_TYPE_ACTION       10  // Generate an action as soon as the screen is created.
#define ITEM_TYPE_BIGVARLABEL  11  // A bigfont variable label, currently only numeric.
#define ITEM_TYPE_SMALLLABEL   12  // A tinyfont static label
#define ITEM_TYPE_LEAVE_ACTION 13  // Action that occurs when you leave the screen


#define INVALID_SCREEN 255

struct screen_item {
  uint8_t type;
  uint8_t val1;
  uint8_t val2;
  char    text[TEXT_LENGTH];
  uint8_t kanji_image;
};

struct screen {
  uint8_t       item_count;
  screen_item   items[10];
  uint8_t help_screen;
};

extern __FLASH__ screen screens_layout[SCREEN_COUNT];

#endif
