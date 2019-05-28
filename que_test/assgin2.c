#include <stdio.h>

#define MAX 1005

int tomato[MAX][MAX];
int q[MAX*MAX][2];

int head, tail;
int N, M;
int zero;

int bfs(int row, int col);
void push(int x, int y);

int main() {
	int tc; 
	int i, j;
	scanf("%d", &tc);
	
	while (tc--) {
		scanf("%d %d", &M, &N);
		for (i = 0; i <= N + 1; i++) {
			for (j = 0; j <= M + 1; j++) {
				if (i == 0 || j == 0 || i == N + 1 || j == M + 1)
					tomato[i][j] = -1;
				else {
					scanf("%d", &tomato[i][j]);
					if (tomato[i][j] == 0)
						zero++;
					if (tomato[i][j] == 1)
						push(i, j);
				}
			}
		}

		if (zero == 0) {
			printf("0");
			return 0;
		}
		printf("%d\n", bfs(M, N));
	}

	return 0;
}

//노드 추가
void pop() {
	head++;
}

//
void push(int x, int y) {
	q[tail][0] = x;
	q[tail][1] = y;
	tail++;
}

int bfs(int row, int col) {
	int i, j;
	int cur_x, cur_y;
	while (head != tail) {
		cur_x = q[head][0];
		cur_y = q[head][1];

		pop();
		//토마토 밭 알고리즘
		//현재위치 위
		if (tomato[cur_x - 1][cur_y] == 0) {
			tomato[cur_x - 1][cur_y] = tomato[cur_x][cur_y] + 1;
			push(cur_x - 1, cur_y);
			zero--;
		}
		//현재위치 아래
		if (tomato[cur_x + 1][cur_y] == 0) {
			tomato[cur_x][cur_y + 1] = tomato[cur_x][cur_y] + 1;
			push(cur_x + 1, cur_y);
			zero--;
		}
		//현재위치 우
		if (tomato[cur_x][cur_y + 1] == 0) {
			tomato[cur_x][cur_y + 1] = tomato[cur_x][cur_y] + 1;
			push(cur_x, cur_y + 1);
			zero--;
		}
		//현재위치 좌
		if (tomato[cur_x][cur_y - 1] == 0) {
			tomato[cur_x][cur_y - 1] = tomato[cur_x][cur_y] + 1;
			push(cur_x, cur_y - 1);
			zero--;
		}
	}

	if (zero > 0)
		return -1;
	else
		return tomato[cur_x][cur_y] - 1;
}