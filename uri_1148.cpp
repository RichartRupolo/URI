#include <cstdio>
#include <iostream>
#define INFINITY 1 << 25

using namespace std;

int matrix[501][501];

int dijkstra(int source, int destiny, int n) {

    int shortest_distance, next_vertex, i, j;
    int distance[n];
    bool correct[n];

    for (i = 1; i <= n; i++) {
        distance[i] = INFINITY;
        correct[i] = false;
    }

    distance[source] = 0;

    for (i = 1; i <= n; i++) {
        shortest_distance = INFINITY;

        if (correct[destiny]) break;

        for (j = 1; j <= n; j++) {
            if (distance[j] < shortest_distance && !correct[j]) {
                shortest_distance = distance[j];
                next_vertex = j;
            }   
        }

        if (shortest_distance == INFINITY) break;

        correct[next_vertex] = true;

        for (j = 1; j <= n; j++) {
            if (shortest_distance + matrix[next_vertex][j] < distance[j]) {
                distance[j] = shortest_distance + matrix[next_vertex][j];
            }
        }
    }

    return distance[destiny];
}

int main() {
    int n, e, x, y, h, k, o, d, i, j, result;

    while ((cin >> n >> e) && n) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                matrix[i][j] = INFINITY;
            }
        }

        while (e--) {
            cin >> x >> y >> h;
            matrix[x][y] = h;
            if (matrix[y][x] != INFINITY) {
                matrix[y][x] = 0;
                matrix[x][y] = 0;
            }
        }
        
        cin >> k;

        while (k--) {
            cin >> o >> d;
            result = dijkstra(o, d, n);
            if (result == INFINITY) {
                puts("Nao e possivel entregar a carta");
            } else {
                cout << result << endl;
            }
        }
        puts("");
    }

    return 0;
}

