#include "embroidery.h"

/*! Reads a file with the given \a fileName and loads the data into \a pattern.
 *  Returns \c true if successful, otherwise returns \c false. */
int read100(EmbPattern* pattern, const char* fileName)
{
    EmbFile* file = 0;
    int x, y;
    int stitchType;
    unsigned char b[4];

    if (!validateReadPattern(pattern, fileName, "read100")) return 0;

    file = embFile_open(fileName, "rb");
    if(!file)
    {
        embLog_error("format-100.c read100(), cannot open %s for reading\n", fileName);
        return 0;
    }
    embPattern_loadExternalColorFile(pattern, fileName);
    while(embFile_read(b, 1, 4, file) == 4)
    {
        stitchType = NORMAL;
        x = (b[2] > 0x80) ? -(b[2] - 0x80) : b[2];
        y = (b[3] > 0x80) ? -(b[3] - 0x80) : b[3];
        /*if(!(b[0] & 0xFC)) stitchType = JUMP; TODO: review & fix */
        if(!(b[0] & 0x01)) stitchType = STOP;
        if(b[0] == 0x1F) stitchType = END;
        embPattern_addStitchRel(pattern, x / 10.0, y / 10.0, stitchType, 1);
    }
    embFile_close(file);

    embPattern_end(pattern);

    return 1;
}

/*! Writes the data from \a pattern to a file with the given \a fileName.
 *  Returns \c true if successful, otherwise returns \c false. */
int write100(EmbPattern* pattern, const char* fileName)
{
    if (!validateWritePattern(pattern, fileName, "write100")) return 0;

    /* TODO: embFile_open() needs to occur here after the check for no stitches */

    return 0; /*TODO: finish write100 */
}

