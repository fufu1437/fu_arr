#ifndef FU_arr__fu_arr__fufu1437_h
#define FU_arr__fu_arr__fufu1437_h

/*
 * 这是一个极其简单的动态列表
 * 支持泛型，需要调用者自行处理类型
 * API与Python类似
*/

#include <stdio.h>

typedef long long ArrInt;

typedef struct FU_ARR FU_ARR;

FU_ARR* fuarr_creat_arr(size_t s);
// FU_ARR* fuarr_creat_arr(size_t s, size_t type_size);

void* fuarr_get(FU_ARR *arr, ArrInt i);

int fuarr_put(FU_ARR *arr, void *v);

int fuarr_set(FU_ARR *arr, ArrInt index, void *v);

ArrInt fuarr_len(FU_ARR *arr);

void* fuarr_pop(FU_ARR *arr);

void* fuarr_del(FU_ARR *arr, ArrInt index);

void fuarr_free_container(FU_ARR *arr);

#endif
