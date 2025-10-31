#include "para_callback.h"

void repeat_three_times(callback f, void *para)
{
    f(para);
    f(para);
    f(para);
}