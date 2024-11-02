#ifndef L4c4f474745525f4848
#define L4c4f474745525f4848

#include <stdio.h>

namespace ShabahLogger
{
#define ShahLogError(...) ShahPrintOutput(LOG_ERROR, __FILE__, __LINE__, "\033[91m", "\033[0m", stderr, __VA_ARGS__)
#define ShahLogWarn(...) ShahPrintOutput(LOG_WARN, __FILE__, __LINE__, "", "", stderr, __VA_ARGS__)
#define ShahLogDebug(...) ShahPrintOutput(LOG_DEBUG, __FILE__, __LINE__, "\033[37m", "\033[0m", stderr, __VA_ARGS__)
#define ShahLogInfo(...) ShahPrintOutput(LOG_INFO, __FILE__, __LINE__, "", "", stderr, __VA_ARGS__)

    class ShahLogger
    {
        void ShahPrintOutput(int Level, const char *File, int Line, const char *Head, const char *Tail, FILE *Stream, const char *Format, ...);
        void ShahLogOutput(FILE *Stream, const char *Format, ...);
        void ShahLogSetLevel(int Level);
        void ShahLogSuccessFullyLogin(FILE *Stream, const char *Format, const char *Hostname, int Port, const char *Username, const char *Password);
        void ShahLogTargetFound(FILE *Stream, const char *Format, const char *Hostname, int Port, const char *Banner);
    };
}

#endif L4c4f474745525f4848