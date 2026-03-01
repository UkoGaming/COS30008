// COS30008 - 2026 - Problem set 2

// Nguyen Hoang Phuc Anh - 105551545

#include "ShakerSortableIntVector.h"

ShakerSortableIntVector::ShakerSortableIntVector( const int aArrayOfIntegers[], size_t aNumberOfElements )
    : SortableIntVector(aArrayOfIntegers, aNumberOfElements)
{}

void ShakerSortableIntVector::sort( Comparable aOrderFunction ){
    bool swapped = true;
    int start = 0;
    int end = size() - 1;

    while (swapped) {

        swapped = false;

        for (int i = start; i < end; ++i){
            if (aOrderFunction(get(i), get(i + 1))) {
                swap(i, i + 1);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        swapped = false;

        end--;

        for (int i = end - 1; i > start; --i) {
            if (aOrderFunction(get(i - 1), get(i))) {
                swap(i, i - 1);
                swapped = true;
            }
        }

        start++;

    }
}