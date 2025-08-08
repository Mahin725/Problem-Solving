#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void solve() {
    int n;
    long long x;
    std::cin >> n >> x;
    std::string s;
    std::cin >> s;
    x--; // Use 0-based indexing for the string

    long long wl = 0, el = 0;
    for (int i = 0; i < x; ++i) {
        if (s[i] == '#') {
            wl++;
        } else {
            el++;
        }
    }

    long long wr = 0, er = 0;
    for (int i = x + 1; i < n; ++i) {
        if (s[i] == '#') {
            wr++;
        } else {
            er++;
        }
    }

    int days = 0;
    while (wl > 0 || wr > 0) {
        days++;

        if (wl == 0) { // Left side is clear, Hamid escapes right
            wr--;
            continue;
        }
        if (wr == 0) { // Right side is clear, Hamid escapes left
            wl--;
            continue;
        }

        // --- Both sides have walls, simulate the minimax turn ---

        if (wl <= wr) {
            // Hamid intends to attack LEFT
            if (el > 0) {
                // Mani can reinforce the left side.
                // After reinforcement, Hamid sees (wl+1) vs wr walls.
                if (wl + 1 <= wr) {
                    // Left is still better or equal. Hamid attacks Left.
                    // Net effect: Mani uses a left cell, Hamid destroys a left wall.
                    // The wall count wl is effectively unchanged for the next turn's calculation.
                    el--;
                } else {
                    // Right is now strictly better. Hamid switches.
                    // Mani uses a left cell, but Hamid destroys a right wall.
                    el--;
                    wr--;
                }
            } else {
                // Mani can't reinforce. Hamid makes progress.
                wl--;
            }
        } else { // wl > wr
            // Hamid intends to attack RIGHT
            if (er > 0) {
                // Mani can reinforce the right side.
                // After reinforcement, Hamid sees wl vs (wr+1) walls.
                if (wr + 1 < wl) {
                    // Right is still strictly better. Hamid attacks Right.
                    // Net effect: er is used, wr is effectively unchanged.
                    er--;
                } else {
                    // Left is now better or equal. Hamid switches.
                    // Mani uses a right cell, but Hamid destroys a left wall.
                    er--;
                    wl--;
                }
            } else {
                // Mani can't reinforce. Hamid makes progress.
                wr--;
            }
        }
    }

    std::cout << days << std::endl;
}

int main() {
    // Fast I/O is crucial for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}