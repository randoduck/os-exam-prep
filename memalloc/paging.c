#include <stdio.h>

int main() {
    int n, i, addr;
    int page_table[8];   // page → frame mapping
    int page_size = 32;

    scanf("%d", &n);

    // input page table (page, frame)
    for(i = 0; i < 8; i++)
        scanf("%d", &page_table[i]);

    for(i = 0; i < n; i++) {
        scanf("%d", &addr);

        int page = addr / page_size;
        int offset = addr % page_size;
        int frame = page_table[page];

        int physical = frame * page_size + offset;

        printf("(%d, %d, %d, %d, %d)\n",
               addr, page, frame, offset, physical);
    }

    return 0;
}