//
//  Lodoovka.h
//  lodoovka
//
//  Created by Radosław Pietruszewski on 10.10.2013.
//  Copyright (c) 2013 Radosław Pietruszewski. All rights reserved.
//

#ifndef lodoovkah
#define lodoovkah
#include "Geometry.h"

#ifdef __cplusplus
extern "C" {
#endif

void lodoovka_main();
void draw_desktop();
void lodoovka_redraw();

l_rect plusbtnf();
void draw_plusbtn();
void plusbtn_clicked();


#ifdef __cplusplus
}
#endif

#endif
