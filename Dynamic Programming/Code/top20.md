Top 20 Dynamic Programming Interview Questions
## Index
1. [LCS (longest common Subsequence)](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/top20.md#1-lcs-longest-common-subsequence)
2. [LIS (Longest Increasing Subsequence)](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/top20.md#2-lis-longest-increasing-subsequence)
3. [Edit Distance](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/top20.md#3-edit-distance)
4. [Subset Sum Problem](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/top20.md#4subset-sum-problem)
5. [Minimum Sum Partition](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/top20.md#4-minimum-sum-partition)
6.
7.
8.
9.
10.
11.
12.
13.
14.
15.
16.
17.
18.
19.
20.







## 1. [LCS (longest common Subsequence)](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/lcs.cpp)

Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”.
## 2. [LIS (Longest Increasing Subsequence)](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/lis.cpp)

The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. For example, the length of LIS for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 and LIS is {10, 22, 33, 50, 60, 80}.
## 3. [Edit Distance](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/edit%20distance.cpp)

Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1’ into ‘str2’.

1.Insert<br />
2.Remove<br />
3.Replace<br />
All of the above operations are of equal cost.

## 4.[Subset Sum Problem](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/subsetsum.cpp)

Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum
Example: 

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9<br />
Output: True  <br />
There is a subset (4, 5) with sum 9.

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30<br />
Output: False<br />
There is no subset that add up to 30.

## 5. [Minimum Sum Partition](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/min%20sum%20partition.cpp)

Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum. 
If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.
Example: 

Input:  arr[] = {1, 6, 11, 5} <br />
Output: 1<br />
Explanation:<br />
Subset1 = {1, 5, 6}, sum of Subset1 = 12 <br />
Subset2 = {11}, sum of Subset2 = 11 <br />

let S be the sum of all numbers in array
Sol: the ans is S-2.x1 where x1 is the max number in range 0 to S/2 which has a valid subset sum.
