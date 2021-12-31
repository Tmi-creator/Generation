#include <bits/stdc++.h>

using namespace std;

void func(int start_x, int start_y, std::vector <std::vector <int>>& a) {
    int n = 15;
    for (int j = 0; j < n; j++) {
        int end_x, end_y;

        if (rand() % 2 == 0) {
            end_x = start_x + rand() % 20;
        }
        else {
            end_x = start_x - rand() % 20;
        }

        if (rand() % 2 == 0) {
            end_y = start_y + rand() % 20;

        }
        else {
            end_y = start_y - rand() % 20;
        }

        for (int l = std::min(start_x, end_x); l < std::max(start_x, end_x); l++) {
            for (int k = std::min(start_y, end_y); k < std::max(start_y, end_y); k++) {
                if (rand() % 6 == 0) {
                    a[l][k]++;
                }
                a[l][k]++;
            }
        }
    }
}

int main() {

    srand(time(NULL));
    int x = 100, y = 100, cnt = 0;
    vector<vector<int>> a(x, vector<int>(y, 0));
    int p = 1;


    ofstream fout;
    fout.open("input.txt");
    for (int d = 0; d < 2; d++) {
        for (int i = 1; i < 3; i++) {
            int start_x = i * i * 20;
            int start_y = p * p * 20;

            func(start_x, start_y, a);
        }p++;
    }

    func(50, 50, a);



    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            fout << a[j][i];
        }
        fout << "\n";
    }



}
