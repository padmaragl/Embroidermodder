/*! @file format-gnc.h */
#ifndef FORMAT_GNC_H
#define FORMAT_GNC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "emb-pattern.h"

int readGnc(EmbPattern* pattern, const char* fileName);
int writeGnc(EmbPattern* pattern, const char* fileName);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* FORMAT_GNC_H */

/* kate: bom off; indent-mode cstyle; indent-width 4; replace-trailing-space-save on; */
