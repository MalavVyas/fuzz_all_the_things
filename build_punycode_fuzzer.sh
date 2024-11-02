clang -fsanitize=fuzzer,address,undefined fuzz_puny_decode.c -o fuzz_punycode ./build/lib64/libcrypto.a ./build/lib64/libssl.a
