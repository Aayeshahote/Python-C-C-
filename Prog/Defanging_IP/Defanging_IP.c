#include <stdio.h>
#include <string.h>

char* defangIPaddr(char* address) {
    int addressLength = strlen(address);
    char* defangedAddress = malloc((3 * addressLength + 1) * sizeof(char));
    
    int j = 0;
    for (int i = 0; i < addressLength; i++) {
        if (address[i] == '.') {
            defangedAddress[j++] = '[';
            defangedAddress[j++] = '.';
            defangedAddress[j++] = ']';
        } else {
            defangedAddress[j++] = address[i];
        }
    }
    
    defangedAddress[j] = '\0';
    
    return defangedAddress;
}

int main() {
    char* address = "1.1.1.1";
    char* result = defangIPaddr(address);
    printf("%s\n", result);
    free(result);
    
    return 0;
}

