[Home](https://github.com/kanti170102041/Code_Bank/) / [graphs](https://github.com/kanti170102041/Code_Bank/tree/main/Graphs)
# Graphs

## INDEX
1. [Age Fudging](README.md#1-age-fudging)
2. [Count the number of nodes at given level in a tree using BFS](README.md#2-count-the-number-of-nodes-at-given-level-in-a-tree-using-bfs)
3. [Cycle Detection in a graph](README.md#3-cycle-detection-in-a-graph)
4. [Find Centre of graph](README.md#4-find-centre-of-graph)
5. [Minimum Number of Vertices to Reach All Nodes](README.md#5-minimum-number-of-vertices-to-reach-all-nodes)
6. [Topological Sort](README.md#6-topological-sort)
7. [Starting node in a directed graph which covers the maximum number of nodes](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/README.md#7-find-the-starting-node-in-a-directed-graph-which-covers-the-maximum-number-of-nodes)
8. [Prim's Algorithm-Minimum spanning Tree](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/README.md#8-prims-algorithm-minimum-spanning-tree)
9. [Knight Rider]()

## 1. [Age Fudging](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/Age%20Fudging.cpp)

Suppose that n people are living in a village. Everyone in this village has a unique number i(1<=i<=n). It is known that the ages of the people in this village range from 0 to 100.
q interviews are conducted in this villages. In response to the question "how manny yeays older are you than person bj?" person aj answers "-cj years(1<=j<=q). For the case of cj<0, person bj is -cj years younger. For the case of cj=0, person bj is the same age.
From the results of the survey, determine whether the villagers' age assignments are without contradiction. If there are multiple possible age distribution give the age difference between the eldest and the youngest that is smallest from among the possible age distributions.
Example 1:
i/p:
  3 2<br />
  1 2 10<br />
  2 3 27<br />
o/p: 37<br />
Example 2:<br />
  3 3<br />
  1 2 1<br />
  2 3 1<br />
  3 1 1<br />
o/p: -1

## 2. [Count the number of nodes at given level in a tree using BFS](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/Count%20the%20number%20of%20nodes%20at%20given%20level%20in%20a%20tree%20using%20BFS.cpp)

Given a tree represented as undirected graph. Count the number of nodes at given level l. It may be assumed that vertex 0 is root of the tree.
Example:
Input :   7<br />
          0 1<br />
          0 2<br />
          1 3<br />
          1 4<br />
          1 5<br />
          2 6<br />
          2<br />
Output :  4

## 3. [Cycle Detection in a graph](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/Cycle%20Detection%20in%20a%20graph.cpp)

The Algo will check for cycles in a directed graph. Basically a DAG(Directed Acyclic Graph) can have a valid topological sort.

## 4. [Find Centre of graph](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/Find%20Centre%20of%20graph.cpp)
      
A tree is an undirected graph in which any two vertices are connected by exactly one path. In other words, any connected graph without simple cycles is a tree.
Given a tree of n nodes labelled from 0 to n - 1, and an array of n - 1 edges where edges[i] = [ai, bi] indicates that there is an undirected edge between the two nodes ai and bi in the tree,
you can choose any node of the tree as the root. When you select a node x as the root, the result tree has height h. Among all possible rooted trees, those with minimum height (i.e. min(h))  are called minimum height trees (MHTs).
Return a list of all MHTs' root labels. You can return the answer in any order.
The height of a rooted tree is the number of edges on the longest downward path between the root and a leaf.

## 5. [Minimum Number of Vertices to Reach All Nodes](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/Minimum%20Number%20of%20Vertices%20to%20Reach%20All%20Nodes.cpp)
A node with indegree zero has to be included as a staring node.
so the algo is to print all the nodes with indegree =0.

## 6. [Topological Sort](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/Topological%20Sort(Khan's%20Algorithm).cpp)
(*Khan's Algorithm*)
1. Find the nodes with zero dependencies, add it in a stack.
2. pop out nodes with zero dependencies and add it into the sorting vector, and remove it updating the indegree.

## 7. [Find the starting node in a directed graph which covers the maximum number of nodes](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/node%20in%20a%20directed%20graph%20which%20covers%20the%20maximum%20number%20of%20nodes.cpp)

Given a directed graph with N number of nodes and exactly N number of edges. Each node has exactly one outgoing edge from it. Find a path such that the maximum number of nodes can be covered from the starting point, and return the starting point.

NOTE: A node can have multiple edges which are pointing towards him, but only one outgoing edge<br />
<img src="https://res.cloudinary.com/practicaldev/image/fetch/s---hjNbSiK--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/uluzwwtwbjpaon08mc4b.png" width="250">

Inupt: N = 5<br />
1->2, 2->1, 3->1, 4->2, 5->3<br />
Output: 5<br />
Explanation: <br />
If we start from node 1 as beginning then the path is: 1 -> 2<br />
If we start from node 2 as beginning then the path is: 2 -> 1<br />
If we start from node 3 as beginning then the path is: 3 -> 1 -> 2<br />
If we start from node 4 as beginning then the path is: 4 -> 2 -> 1<br />
If we start from node 5 as beginning then path is: 5 -> 3 -> 1 -> 2<br />

Hence, we can clearly see that if we start for 5, we cover the maximum number of nodes in the graph i.e. 4.
## 8. [Prim's Algorithm, Minimum Spanning tree](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/prims.cpp)
Prim's is a Greedy MST Algorithm. It has a time complexity of O(ElogV)
Algorithm:
Maintain a min Priority Queue (pq) that sorts edges based on min edge cost, this will be used to determine the next node to visit and the edge used to get there.

Start the algorithm on any node s, mark s as visited and iterate over all edges of s, adding them to the pq.

while the pq is not empty and mst has not been formed dequeue edge from the pq, If the dequeue edge is outdated(already visited) then skip it and pill again otherwise make it visited and the selected edge to the mst.

eterate over the new current node's edge and add all its edge to the pq. Do not add edges to the pq which point to already visited nodes.

## 9. [Knight Rider](https://github.com/kanti170102041/Code_Bank/blob/main/Graphs/Codes/knight%20rider.cpp)

Mandy's elder brother Rob is supposed to be a chess whizard. Mandy wants to test her brother's abilities and gives him a challenge.
On a standard 8x8 chess board, she places one knight at coordinates X. She then placces M other pawns at varius coordinated Yi (i= 1to M).

Rob's challenge is to determine the lowest number of moves the knight needs to make to kill all the 'M' pawns As we know, a knight move in L shape i.e 2 horizontal 1 vertical Or 2 vertica one horizontal cells. Your goals is to help Rob beat Mandy's challenge.

Input: 
First line contains the number of Pawns<br />
next M lines contains pair of numbers that denote pawn coordinates<br />
next line conatins pair of numbers that denote knight coordinates
Output: 
Min No. of moves to kill all pawns
