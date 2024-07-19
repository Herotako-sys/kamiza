#include  <stdio.h>
#include  <stdlib.h>
#include "graph.h"

int listed[N];  // 0 未, 1 済

void dfs(int CurrentRoom){
    int RoomToCheck;

	listed[CurrentRoom] = 1;

	for (RoomToCheck = 0; RoomToCheck < N; RoomToCheck++) {
        if (edge[CurrentRoom][RoomToCheck] != 0 && listed[RoomToCheck] == 0) 
			dfs(RoomToCheck);
	}

	printf("%d\n", CurrentRoom);

	return;
}

int main(int argc, char *argv[]){
    int RoomToCheck;

    int startnode = 0;
    if (argc == 1) {
        startnode = 0;
    } else if (argc == 2) {
        startnode = atoi(argv[1]);
        if (startnode < 0 || startnode >= N) {
            return -1;
        }
    }

	for (RoomToCheck = 0; RoomToCheck < N; RoomToCheck++)
		listed[RoomToCheck] = 0;

	dfs(startnode); 

    {
        int r;
        for (r = 0; r < N; r++) {
            if (listed[r] == 0) {
                dfs(r);
            }
        }
    }

	return 0;
}