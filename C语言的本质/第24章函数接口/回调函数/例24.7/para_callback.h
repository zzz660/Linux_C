#ifndef PARA_CALLBACK_H
#define PARA_CALLBACK_H

typedef void (*callback)(void *);
extern void repeat_three_times(callback f, void *para);

#endif