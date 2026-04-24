#include <stdio.h>

int main() {
    int n, f;
    scanf("%d", &n);

    int pages[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    scanf("%d", &f);

    int frame[f], faults = 0;

    for(int i = 0; i < f; i++)
        frame[i] = -1;

    for(int i = 0; i < n; i++) {
        int found = 0;

        // check HIT
        for(int j = 0; j < f; j++) {
            if(frame[j] == pages[i]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            int pos = -1;

            // empty frame
            for(int j = 0; j < f; j++) {
                if(frame[j] == -1) {
                    pos = j;
                    break;
                }
            }

            // if full → find optimal
            if(pos == -1) {
                int farthest = -1;

                for(int j = 0; j < f; j++) {
                    int k;
                    for(k = i + 1; k < n; k++) {
                        if(frame[j] == pages[k])
                            break;
                    }

                    if(k == n) { // never used again
                        pos = j;
                        break;
                    }

                    if(k > farthest) {
                        farthest = k;
                        pos = j;
                    }
                }
            }

            frame[pos] = pages[i];
            faults++;
        }
    }

    printf("Page Faults = %d\n", faults);
}
