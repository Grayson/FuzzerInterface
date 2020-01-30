//
//  FuzzerInterface.h
//  ipspatcher
//
//  Created by Grayson Hansard on 1/29/20.
//

#ifndef FuzzerInterface_h
#define FuzzerInterface_h

#include <stddef.h>
#include <stdint.h>

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size);
size_t LLVMFuzzerCustomMutator(uint8_t *Data, size_t Size, size_t MaxSize, unsigned int Seed);
size_t LLVMFuzzerMutate(uint8_t *Data, size_t Size, size_t MaxSize);

#endif /* FuzzerInterface_h */
