#pragma once

#include <stdio.h>

#define MAX2(x,y) ((x>y)?x:y)
#define MAX3(x,y,z) ((MAX2(x,y)>MAX2(y,z))?MAX2(x,y):MAX2(y,z))
