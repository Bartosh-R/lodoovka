//
//  Geometry.m
//  lodoovka
//
//  Created by Radosław Pietruszewski on 11.10.2013.
//  Copyright (c) 2013 Radosław Pietruszewski. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Geometry.h"

char point_in_rect(l_point point, l_rect rect)
{
    if(point.x >= rect.x &&
       point.x <  rect.x + rect.w &&
       point.y >= rect.y &&
       point.y <  rect.y + rect.h)
    {
        return 1;
    }
    
    return 0;
}

l_rect inset_recta(l_rect rect, short inset)
{
    return inset_rectc(rect, inset, inset, inset, inset);
}

l_rect inset_rectb(l_rect rect, short topbottom, short leftright)
{
    return inset_rectc(rect, topbottom, leftright, topbottom, leftright);
}

l_rect inset_rectc(l_rect rect, short top, short right, short bottom, short left)
{
    rect.x += left;
    rect.y += top;
    rect.w -= (left + right);
    rect.h -= (top + bottom);
    
    return rect;
}

l_rect tl_corner(l_rect rect, short w, short h)
{
    rect.w = w;
    rect.h = h;
    
    return rect;
}

l_rect tr_corner(l_rect rect, short w, short h)
{
    rect.x += (rect.w - w);
    rect.w = w;
    rect.h = h;
    
    return rect;
}

l_rect br_corner(l_rect rect, short w, short h)
{
    rect.x += (rect.w - w);
    rect.y += (rect.h - h);
    rect.w = w;
    rect.h = h;
    
    return rect;
}

l_rect bl_corner(l_rect rect, short w, short h)
{
    rect.y += (rect.h - h);
    rect.w = w;
    rect.h = h;
    
    return rect;
}

l_rect t_edge(l_rect rect, short h)
{
    rect.h = h;
    
    return rect;
}

l_rect r_edge(l_rect rect, short w)
{
    rect.x += (rect.w - w);
    rect.w = w;
    
    return rect;
}

l_rect b_edge(l_rect rect, short h)
{
    rect.y += (rect.h - h);
    rect.h = h;
    
    return rect;
}

l_rect l_edge(l_rect rect, short w)
{
    rect.w = w;
    
    return rect;
}
