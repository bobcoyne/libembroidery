/*! @file format-zsk.h */
#ifndef FORMAT_ZSK_H
#define FORMAT_ZSK_H

#include "emb-pattern.h"

#include "api-start.h"
#ifdef __cplusplus
extern "C" {
#endif

extern EMB_PRIVATE int EMB_CALL readZsk(EmbPattern* pattern, const char* fileName);
extern EMB_PRIVATE int EMB_CALL writeZsk(EmbPattern* pattern, const char* fileName);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "api-stop.h"

#endif /* FORMAT_ZSK_H */

