#ifndef S53484148535550504f52545f4848
#define S53484148535550504f52545f4848

#include <cstdlib>

namespace ShabahSupport
{
    class ShahSupport
    {
        void ShahStrCopy(char *Dst, const char *Source, size_t DstSize);
        char *ShahStrReplace(const char *Original, const char *Repository, char const *With);
        char *ShahStrReplacePlaceHolder(char *Input, const char *Serach, const char *Replace);
        void ShahStrReplaceEscapeSequences(char *String);
        void ShahProgressBarRender(size_t Count, size_t Total, const char *Suffix, size_t SuffixMax);
    };
}

#endif S53484148535550504f52545f4848
