#ifndef __STHREAD_H__
#define __STHREAD_H__

#include "sinclude.h"
#include "slimits.h"
#include "squeue.h"
#include "sutils.h"
#include "ssync.h"

int main(void);

void scheduler(int argc);
void init_thread(void);
void initmain(void) __attribute__ ((constructor));

int sthread_create(sthread_t *tid,void(*fun)(void),void *args);
int sthread_exit(void);
int sthread_join(sthread_t sid);

#endif