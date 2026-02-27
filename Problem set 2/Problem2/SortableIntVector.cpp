// COS30008 - 2026 - Problem set 2

// Nguyen Hoang Phuc Anh - 105551545

#include "SortableIntVector.h"

SortableIntVector::SortableIntVector(
    const int aArrayOfIntegers[],
    size_t aNumberOfElements)
    : IntVector(aArrayOfIntegers, aNumberOfElements)
{}
    
void SortableIntVector::sort( Comparable aOrderFunction ){
    int n = size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if(!aOrderFunction(get(j), get(j + 1))){
                swap(j, j + 1);
            }
        }
    }
}