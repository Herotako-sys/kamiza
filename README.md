### How to use kamiza

graph.hの隣接行列は、目上の人か否かを表示している
たとえばこの場合、edge[0][1] == 1であることから、0さんにとって1さんは目上の人に当たる
```
int edge[N][N] = {
//   0 1 2 3 4 5 6 7
	{0,1,0,0,1,0,0,0}, // 0
	{0,0,0,0,0,0,1,0}, // 1
	{0,0,0,1,0,0,1,0}, // 2
	{0,0,0,0,0,0,0,1}, // 3
	{0,0,0,0,0,1,0,0}, // 4
 	{0,0,0,0,0,0,1,0}, // 5
	{0,0,0,0,0,0,0,1}, // 6
	{0,0,0,0,0,0,0,0}  // 7
};
```

demo

```
$ ./program
```

```
7
6
1
5
4
0
3
2
```

高位順に並べる
この順に人を上座から配置していく
