#include<stddef.h>
#include<stdint.h>
#include "openssl_3.0.6/include/crypto/punycode.h"
//clang -fsanitize=fuzzer,address,undefined fuzz_punycode.c -o fuzz_punycode ./build/lib64/libcrypto.a ./build/lib64/libssl.a
int LLVMFuzeerTestOneInput(const uint8_t *data, size_t size){
        unsigned int bar[32];
        unsigned int x = 32;

        ossl_punycode_decode((const char*)data, size, bar, &x);
        return 0;
}
