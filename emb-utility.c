#include "embroidery.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "emb-macro.h"

#ifdef ARDUINO
/*TODO: arduino embTime includes */
#else
#include <time.h>
#endif

char binaryReadByte(EmbFile* file)
{
    return (char)embFile_getc(file);
}

int binaryReadBytes(EmbFile* file, unsigned char* destination, int count)
{
    return (int)embFile_read((char*)destination, 1, count, file);
}

short binaryReadInt16(EmbFile* file)
{
    char a[2];
    embFile_read(a, 1, 2, file);
    return EMB_GET_SHORT(a);
}

int binaryReadInt32(EmbFile* file)
{
    char a[4];
    embFile_read(a, 1, 4, file);
    return EMB_GET_INT(a);
}

unsigned char binaryReadUInt8(EmbFile* file)
{
    return (unsigned char)embFile_getc(file);
}

unsigned short binaryReadUInt16(EmbFile* file)
{
    char a[2];
    embFile_read(a, 1, 2, file);
    return EMB_GET_SHORT(a);
}

unsigned int binaryReadUInt32(EmbFile* file)
{
    char a[4];
    embFile_read(a, 1, 4, file);
    return EMB_GET_INT(a);
}

/* Big endian version */
short binaryReadInt16BE(EmbFile* file)
{
    char a[2];
    embFile_read(a, 1, 2, file);
    return EMB_GET_SHORT_BE(a);
}

/* Big endian version */
unsigned short binaryReadUInt16BE(EmbFile* file)
{
    char a[2];
    embFile_read(a, 1, 2, file);
    return EMB_GET_SHORT_BE(a);
}

/* Big endian version */
int binaryReadInt32BE(EmbFile* file)
{
    char a[4];
    embFile_read(a, 1, 4, file);
    return EMB_GET_INT_BE(a);
}

/* Big endian version */
unsigned int binaryReadUInt32BE(EmbFile* file)
{
    char a[4];
    embFile_read(a, 1, 4, file);
    return EMB_GET_INT_BE(a);
}

void binaryReadString(EmbFile* file, char* buffer, int maxLength)
{
    int i = 0;
    while (i < maxLength) {
        buffer[i] = (char)embFile_getc(file);
        if (buffer[i] == '\0')
            break;
        i++;
    }
}

void binaryReadUnicodeString(EmbFile* file, char* buffer, const int stringLength)
{
    int i = 0;
    for (i = 0; i < stringLength * 2; i++) {
        char input = (char)embFile_getc(file);
        if (input != 0) {
            buffer[i] = input;
        }
    }
}

float binaryReadFloat(EmbFile* file)
{
    union {
        float f32;
        unsigned int u32;
    } float_int_u;
    float_int_u.u32 = binaryReadInt32(file);
    return float_int_u.f32;
}

void binaryWriteByte(EmbFile* file, unsigned char data)
{
    embFile_putc(data, file);
}

void binaryWriteBytes(EmbFile* file, const char* data, int size)
{
    embFile_write((char*)data, 1, size, file);
}

void binaryWriteShort(EmbFile* file, short data)
{
    char a[2];
    EMB_WRITE_SHORT(a, data);
    embFile_write(a, 1, 2, file);
}

void binaryWriteShortBE(EmbFile* file, short data)
{
    char a[2];
    EMB_WRITE_SHORT_BE(a, data);
    embFile_write(a, 1, 2, file);
}

void binaryWriteUShort(EmbFile* file, unsigned short data)
{
    char a[2];
    EMB_WRITE_SHORT(a, data);
    embFile_write(a, 1, 2, file);
}

void binaryWriteUShortBE(EmbFile* file, unsigned short data)
{
    char a[2];
    EMB_WRITE_SHORT_BE(a, data);
    embFile_write(a, 1, 2, file);
}

void binaryWriteInt(EmbFile* file, int data)
{
    char a[4];
    EMB_WRITE_INT(a, data);
    embFile_write(a, 1, 4, file);
}

void binaryWriteIntBE(EmbFile* file, int data)
{
    char a[4];
    EMB_WRITE_INT_BE(a, data);
    embFile_write(a, 1, 4, file);
}

void binaryWriteUInt(EmbFile* file, unsigned int data)
{
    char a[4];
    EMB_WRITE_INT(a, data);
    embFile_write(a, 1, 4, file);
}

void binaryWriteUIntBE(EmbFile* file, unsigned int data)
{
    char a[4];
    EMB_WRITE_INT_BE(a, data);
    embFile_write(a, 1, 4, file);
}

void binaryWriteFloat(EmbFile* file, float data)
{
    union {
        float f32;
        unsigned int u32;
    } float_int_u;
    float_int_u.f32 = data;

    binaryWriteUInt(file, float_int_u.u32);
}

/*! Rounds a double (\a src) and returns it as an \c int. */
int roundDouble(double src)
{
    if (src < 0.0)
        return (int)ceil(src - 0.5);
    return (int)floor(src + 0.5);
}

/*! Removes all characters from the left end of the string
 * (\a str) that match (\a junk), moving right until a mismatch occurs. */
char* lTrim(char* str, char junk)
{
    while (*str == junk) {
        str++;
    }
    return str;
}

/*! Duplicates the string (\a src) and returns it. It is created on the heap.
 * The caller is responsible for freeing the allocated memory. */
char* emb_strdup(char* src)
{
    char* dest = 0;
    if (!src) {
        embLog("ERROR: helpers-misc.c emb_strdup(), src argument is null\n");
        return 0;
    }
    dest = (char*)malloc(strlen(src) + 1);
    if (!dest) {
        embLog("ERROR: helpers-misc.c emb_strdup(), cannot allocate memory\n");
    } else {
        strcpy(dest, src);
    }
    return dest;
}

void embTime_initNow(EmbTime* t)
{
#ifdef ARDUINO
/*TODO: arduino embTime_initNow */
#else
    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    t->year = timeinfo->tm_year;
    t->month = timeinfo->tm_mon;
    t->day = timeinfo->tm_mday;
    t->hour = timeinfo->tm_hour;
    t->minute = timeinfo->tm_min;
    t->second = timeinfo->tm_sec;
#endif /* ARDUINO */
}

EmbTime embTime_time(EmbTime* t)
{
#ifdef ARDUINO
/*TODO: arduino embTime_time */
#else

    int divideByZero = 0;
    divideByZero = divideByZero / divideByZero;
    /*TODO: wrap time() from time.h and verify it works consistently */

#endif /* ARDUINO */
    return *t;
}

/* Converts a 6 digit hex string (I.E. "00FF00") into an
 * EmbColor and returns it. */
EmbColor embColor_fromHexStr(char* val)
{
    int i;
    EmbColor color;
    for (i = 0; i < 6; i++) {
        if (val[i] >= 'A' && val[i] <= 'F') {
            val[i] = '9' + val[i] - 'A' + 1;
        }
        val[i] -= '0';
    }

    color.r = val[0] * 16 + val[1];
    color.g = val[2] * 16 + val[3];
    color.b = val[4] * 16 + val[5];
    return color;
}

/* Replacing the %d in *printf functionality.
 */
void embPointerToArray(char* buffer, void* pointer, int maxDigits)
{
    unsigned int i, value;
    value = (unsigned long int)pointer;
    for (i = 0; i < maxDigits - 1; i++) {
        buffer[i] = ' ';
    }
    buffer[maxDigits - 1] = 0;
    for (; i >= 0; i--) {
        buffer[i] = (value % 16) - '0';
        if (buffer[i] > '9')
            buffer[i] += 'A' - '9';
        value /= 16;
        if (value == 0)
            break;
    }
    buffer += i;
}

/* Replacing the %d in *printf functionality.
 *
 * Accounts for the sign of the 
 */
void embIntToArray(char* buffer, int number, int maxDigits)
{
    int i, j, sign;
    unsigned int unumber;
    sign = 0;
    unumber = number;
    if (number < 0.0) {
        unumber = -number;
        sign = 1;
    }
    for (i = 0; i < maxDigits - 2; i++) {
        buffer[i] = ' ';
    }
    buffer[maxDigits - 1] = 0;
    for (i = maxDigits - 2; i >= 0; i--) {
        printf("%s %d %d\n", buffer, i, unumber);
        buffer[i] = (char)(unumber % 10) + '0';
        unumber = unumber / 10;
        if (unumber == 0)
            break;
    }
    if (sign) {
        buffer[i] = '-';
    }
    /* left shift to the front of the buffer so the buffer doesn't change
     * size in later use
     */
    for (j = 0; j < maxDigits - i; j++) {
        buffer[j] = buffer[i + j];
    }
}

void writeInt(EmbFile* file, int n, int m)
{
    char buffer[30];
    embIntToArray(buffer, n, m);
    embFile_print(file, buffer);
}

/* Replacing the %f in *printf functionality.
 */
void embFloatToArray(char* buffer, float number, float tolerence, int before, int after)
{
    int i, maxDigits, j;
    float t;
    float afterPos[] = { 1.0e-1, 1.0e-2, 1.0e-3, 1.0e-4, 1.0e-5, 1.0e-6, 1.0e-7, 1.0e-8 };
    float beforePos[] = { 1.0, 1.0e1, 1.0e2, 1.0e3, 1.0e4, 1.0e5, 1.0e6, 1.0e7, 1.0e8 };
    maxDigits = before + after + 1;
    for (i = 0; i < maxDigits - 1; i++) {
        buffer[i] = ' ';
    }
    buffer[maxDigits - 1] = 0;
    for (i = before - 1; i >= 0; i--) {
        t = 0.0;
        for (j = 0; j < 9; j++) {
            t += beforePos[i];
            printf("%s %d %d %f %f\n", buffer, i, j, t, number);
            if ((number - tolerence > t) && (t + beforePos[i] > number + tolerence)) {
                buffer[before - 1 - i] = j + '1';
                number -= (j + 1) * beforePos[i];
                break;
            }
        }
    }
    buffer[before] = '.';
    for (i = 0; i < after; i++) {
        t = 0.0;
        for (j = 0; j < 9; j++) {
            t += afterPos[i];
            printf("%s %d %d %f %f\n", buffer, i, j, t, number);
            if ((number - tolerence > t) && (t + afterPos[i] > number + tolerence)) {
                buffer[before + 1 + i] = j + '1';
                number -= (j + 1) * afterPos[i];
                break;
            }
        }
    }
    buffer[before + 1 + after] = 0;
    lTrim(buffer, ' ');
}

/* puts() abstraction. Uses Serial.print() on ARDUINO */
void embLog(const char* str)
{
#ifdef ARDUINO
    inoLog_serial(str);
    inoLog_serial("\n");
#else /* ARDUINO */
    puts(str);
#endif /* ARDUINO */
}

/* Wrapper functions around Keith Pomakis' HashTable Library */

EmbHash* embHash_create(void) { return HashTableCreate(1); }
void embHash_free(EmbHash* hash)
{
    HashTableDestroy(hash);
    hash = 0;
}

int embHash_contains(const EmbHash* hash, const void* key)
{
    return HashTableContainsKey(hash, key);
}

int embHash_insert(EmbHash* hash, const void* key, void* value)
{
    return HashTablePut(hash, key, value);
}

void* embHash_value(const EmbHash* hash, const void* key)
{
    return HashTableGet(hash, key);
}

void embHash_remove(EmbHash* hash, const void* key)
{
    HashTableRemove(hash, key);
}

void embHash_clear(EmbHash* hash)
{
    HashTableRemoveAll(hash);
}

int embHash_empty(const EmbHash* hash)
{
    return HashTableIsEmpty(hash);
}

long embHash_count(const EmbHash* hash)
{
    return HashTableSize(hash);
}

void embHash_rehash(EmbHash* hash, long numOfBuckets)
{
    HashTableRehash(hash, numOfBuckets);
}

