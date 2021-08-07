#include "embroidery.h"

/*! Reads a file with the given \a fileName and loads the data into \a pattern.
 *  Returns \c true if successful, otherwise returns \c false. */
int readEys(EmbPattern* pattern, const char* fileName)
{
    if(!pattern) { embLog_error("format-eys.c readEys(), pattern argument is null\n"); return 0; }
    if(!fileName) { embLog_error("format-eys.c readEys(), fileName argument is null\n"); return 0; }
    return 0; /*TODO: finish readEys */
}

/*! Writes the data from \a pattern to a file with the given \a fileName.
 *  Returns \c true if successful, otherwise returns \c false. */
int writeEys(EmbPattern* pattern, const char* fileName)
{
    if (!validateWritePattern(pattern, fileName, "writeEys")) return 0;

    /* TODO: embFile_open() needs to occur here after the check for no stitches */

    return 0; /*TODO: finish writeEys */
}

