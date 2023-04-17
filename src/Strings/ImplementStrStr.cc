#include "string"

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) return 0;
        size_t index = haystack.find(needle);
        if (index != std::string::npos) return index;
        return -1;
    }
};