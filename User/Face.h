//
// Created by w1445 on 2024/12/23.
//

#ifndef LTDC_800_480_FACE_H
#define LTDC_800_480_FACE_H

#include "main.h"

typedef struct
{
    uint8_t  normal;
    uint8_t  rest;
    uint8_t  sleep;
    uint8_t  cry;
    uint8_t  happy;
}Face_Date;


void Normal_Face(void);
void Rest_Face(void);
void Normal(void);

extern Face_Date face_date;

#endif //LTDC_800_480_FACE_H
