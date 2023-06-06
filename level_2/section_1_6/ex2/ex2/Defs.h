#pragma once

#include <stdio.h>

// Defining the max macros. We will use the MAX2 macro in the MAX3 macro as a subroutine 
#define MAX2(x,y) ((x>y)?x:y)
#define MAX3(x,y,z) ((MAX2(x,y)>MAX2(y,z))?MAX2(x,y):MAX2(y,z))
