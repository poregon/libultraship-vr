#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void ControllerBlockGameInput(uint16_t inputBlockId);
void ControllerUnblockGameInput(uint16_t inputBlockId);

#ifdef __cplusplus
};
#endif
