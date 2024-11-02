clang -fsanitize=fuzzer,address,undefined first_fuzzer.cc -o first_fuzzer
clang -fsanitize=fuzzer,address,undefined third_fuzzer.cc -o third_fuzzer
clang -fsanitize=fuzzer,address,undefined second_fuzzer.cc -o first_fuzzer
