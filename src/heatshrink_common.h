#ifndef HEATSHRINK_H
#define HEATSHRINK_H

#include <stdint.h>

#define HEATSHRINK_AUTHOR "Scott Vokes <vokes.s@gmail.com>"
#define HEATSHRINK_URL "https://github.com/atomicobject/heatshrink"

/* Version 0.4.1 */
#define HEATSHRINK_VERSION_MAJOR 0
#define HEATSHRINK_VERSION_MINOR 4
#define HEATSHRINK_VERSION_PATCH 1

#define HEATSHRINK_MIN_WINDOW_BITS 4
#define HEATSHRINK_MAX_WINDOW_BITS 15

#define HEATSHRINK_MIN_LOOKAHEAD_BITS 3

#define HEATSHRINK_LITERAL_MARKER 0x01
#define HEATSHRINK_BACKREF_MARKER 0x00

struct _heatshrink_header_t {
    char magic[2];
    uint8_t window_sz2;
    uint8_t lookahead_sz2;
};
typedef struct _heatshrink_header_t heatshrink_header_t;

#endif
