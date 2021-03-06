//
//  Window.h
//  lodoovka
//
//  Created by Radosław Pietruszewski on 10.10.2013.
//  Copyright (c) 2013 Radosław Pietruszewski. All rights reserved.
//

#ifndef windowh
#define windowh
#include "Geometry.h"
#include "Event.h"

enum Window_eventmode
{
    WEM_None,
    WEM_Move,
    WEM_Close,
    WEM_Resize_t,
    WEM_Resize_b,
    WEM_Resize_r,
    WEM_Resize_l,
    WEM_Resize_tl,
    WEM_Resize_tr,
    WEM_Resize_br,
    WEM_Resize_bl
};

struct Window {
    l_rect frame;
    char *title;
    
    l_point _drag_loc;
    enum Window_eventmode eventmode;
};

typedef struct Window* window_ref;

window_ref window_create(short x, short y, short w, short h, const char *title);
void window_draw(window_ref wnd);

void window_handle_event(window_ref wnd, Event e);

#endif
