#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t) {
    int s_to_t_map[256] = {0};
    int t_to_s_map[256] = {0};
    
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        int s_char = (unsigned char)s[i];
        int t_char = (unsigned char)t[i];
        
        if (s_to_t_map[s_char] == 0 && t_to_s_map[t_char] == 0) {
            s_to_t_map[s_char] = t_char;
            t_to_s_map[t_char] = s_char;
        } else if (s_to_t_map[s_char] != t_char || t_to_s_map[t_char] != s_char) {
            return false;
        }
    }
    
    return true;
}
