#include <cstring>

extern "C" __declspec(dllexport) bool FindCharacters(const char* str, const char* characters) {
    for (int i = 0; characters[i] != '\0'; ++i) {
        if (strchr(str, characters[i]) == NULL) {
            return false;
        }
    }
    return true;
}