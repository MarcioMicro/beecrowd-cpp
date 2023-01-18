#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int num[26];
    for (int i=0; i<26; i++) {
        num[i] = i+97;
        printf("%d e %c\n", num[i], num[i]);
    }

    return 0;
}
