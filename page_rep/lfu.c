#include <stdio.h>

int main() {
    int n, f;
    scanf("%d", &n);

    int pages[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    scanf("%d", &f);

    int frame[f], freq[f], faults = 0;

    for(int i = 0; i < f; i++) {
        frame[i] = -1;
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        int found = 0;

        // HIT
        for(int j = 0; j < f; j++) {
            if(frame[j] == pages[i]) {
                freq[j]++;
                found = 1;
                break;
            }
        }

        if(!found) {
            int pos = -1;

            // empty
            for(int j = 0; j < f; j++) {
                if(frame[j] == -1) {
                    pos = j;
                    break;
                }
            }

            // full → LFU
            if(pos == -1) {
                int min = freq[0];
                pos = 0;

                for(int j = 1; j < f; j++) {
                    if(freq[j] < min) {
                        min = freq[j];
                        pos = j;
                    }
                }
            }

            frame[pos] = pages[i];
            freq[pos] = 1;
            faults++;
        }
    }

    printf("Page Faults = %d\n", faults);
}
