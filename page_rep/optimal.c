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
