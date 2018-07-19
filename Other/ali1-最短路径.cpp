/*光明小学的小朋友们要举行一年一度的接力跑大赛了，但是小朋友们却遇到了一个难题：设计接力跑大赛的线路，你能帮助他们完成这项工作么？
光明小学可以抽象成一张有N个节点的图，每两点间都有一条道路相连。光明小学的每个班都有M个学生，所以你要为他们设计出一条恰好经过M条边的路径。
光明小学的小朋友们希望全盘考虑所有的因素，所以你需要把任意两点间经过M条边的最短路径的距离输出出来以供参考。

你需要设计这样一个函数：
res[][] Solve( N, M, map[][]);
注意：map必然是N * N的二维数组，且map[i][j] == map[j][i]，map[i][i] == 0，-1e8 <= map[i][j] <= 1e8。（道路全部是无向边，无自环）2 <= N <= 100, 2 <= M <= 1e6。要求时间复杂度控制在O(N^3*log(M))。

map数组表示了一张稠密图，其中任意两个不同节点i,j间都有一条边，边的长度为map[i][j]。N表示其中的节点数。
你要返回的数组也必然是一个N * N的二维数组，表示从i出发走到j，经过M条边的最短路径
你的路径中应考虑包含重复边的情况。

样例：

N = 3
M = 2
map = {
 {0, 2, 3},
 {2, 0, 1},
 {3, 1, 0}
}

输出结果result为：
result = {
 {4, 4, 3},
 {4, 2, 5},
 {3, 5, 2}
}

 

输入样例：

3
2
3 3 
0 2 3
2 0 1
3 1 0

输出样例：

[[4, 4, 3],

[4, 2, 5],

[3, 5, 2]]*/
// 记录每轮i到j的最小值 再走新的一轮
#coding:utf-8
if __name__=='__main__':
    n = int(raw_input())
    m = int(raw_input())
    x = raw_input()
    map = []
    for i in range(n):
        line = [int(x) for x in raw_input().split()]
        map.append(list(line))
    dp = [list(x) for x in map]     #一维列表浅拷贝用list(),二维列表浅拷贝用[list(x) for x in dp]  三维用[[list(i) for i in x] for x in dp]
    last_dp = [list(x) for x in map]
    for k in range(m - 1):     #共循环m-1轮，每一次循环后的dp矩阵元素代表i和j之间的长度为m的最短路径
        for i in range(n):
            for j in range(n):
                tmp = [last_dp[i][x] + map[x][j] for x in range(n) if x != i and x != j]
                dp[i][j] = min(tmp)
				 
        # copy
        last_dp = [list(x) for x in dp]
 
    print dp
