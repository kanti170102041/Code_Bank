# Graphs
## INDEX
1. [Age Fudging](README.md#1-age-fudging)
2. [Count the number of nodes at given level in a tree using BFS](README.md#2-count-the-number-of-nodes-at-given-level-in-a-tree-using-bfs)
3. [Cycle Detection in a graph](README.md#3-cycle-detection-in-a-graph)
4. [Find Centre of graph](README.md#4-find-centre-of-graph)
5. [Minimum Number of Vertices to Reach All Nodes](README.md#5-minimum-number-of-vertices-to-reach-all-nodes)
6. [Topological Sort](README.md#6-topological-sort)




## 1. [Age Fudging](https://github.com/kanti170102041/Code_Bank/blob/kanti170102041-patch-1/Graphs/Codes/Age%20Fudging)

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

## 2. [Count the number of nodes at given level in a tree using BFS](https://github.com/kanti170102041/Code_Bank/blob/kanti170102041-patch-1/Graphs/Codes/Count%20the%20number%20of%20nodes%20at%20given%20level%20in%20a%20tree%20using%20BFS)

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

## 3. [Cycle Detection in a graph](https://github.com/kanti170102041/Code_Bank/blob/kanti170102041-patch-1/Graphs/Codes/Cycle%20Detection%20in%20a%20graph)

The Algo will check for cycles in a directed graph. Basically a DAG(Directed Acyclic Graph) can have a valid topological sort.

## 4. [Find Centre of graph](https://github.com/kanti170102041/Code_Bank/blob/kanti170102041-patch-1/Graphs/Codes/Find%20Centre%20of%20graph)
      
A tree is an undirected graph in which any two vertices are connected by exactly one path. In other words, any connected graph without simple cycles is a tree.
Given a tree of n nodes labelled from 0 to n - 1, and an array of n - 1 edges where edges[i] = [ai, bi] indicates that there is an undirected edge between the two nodes ai and bi in the tree,
you can choose any node of the tree as the root. When you select a node x as the root, the result tree has height h. Among all possible rooted trees, those with minimum height (i.e. min(h))  are called minimum height trees (MHTs).
Return a list of all MHTs' root labels. You can return the answer in any order.
The height of a rooted tree is the number of edges on the longest downward path between the root and a leaf.

## 5. [Minimum Number of Vertices to Reach All Nodes](https://github.com/kanti170102041/Code_Bank/blob/kanti170102041-patch-1/Graphs/Codes/Minimum%20Number%20of%20Vertices%20to%20Reach%20All%20Nodes)
A node with indegree zero has to be included as a staring node.
so the algo is to print all the nodes with indegree =0.

## 6. [Topological Sort](https://github.com/kanti170102041/Code_Bank/blob/kanti170102041-patch-1/Graphs/Codes/Topological%20Sort(Khan's%20Algorithm))
(*Khan's Algorithm*)
1. Find the nodes with zero dependencies, add it in a stack.
2. pop out nodes with zero dependencies and add it into the sorting vector, and remove it updating the indegree.
