[Home](https://github.com/kanti170102041/Code_Bank)/[Dinamic Programming](https://github.com/kanti170102041/Code_Bank/tree/main/Dynamic%20Programming)
# Dinamic Programming 

## Index
1. [Choice of Area](#1-choice-of-area)
2. [Count all subsequences having product less than K](#2-count-all-subsequences-having-product-less-than-k)
3. [Count Smaller elements to right O(nlogn)](#3-count-smaller-elements-to-right-onlogn)
4. [Largest divisible pairs subset](#4-largest-divisible-pairs-subset)
5. [Maximize the sum of selected numbers from an array to make it empty](#5-maximize-the-sum-of-selected-numbers-from-an-array-to-make-it-empty)
6. [Maximum number of segments of lengths a, b and c](#6-maximum-number-of-segments-of-lengths-a-b-and-c)
7. [Maximum path sum for each position with jumps under divisibility condition](#7-maximum-path-sum-for-each-position-with-jumps-under-divisibility-condition)
8. [Maximum subsequence sum such that no three are consecutive](#8-maximum-subsequence-sum-such-that-no-three-are-consecutive)
9. [Maximum sum increasing subsequence from a prefix and a given element after prefix is must](#9-maximum-sum-increasing-subsequence-from-a-prefix-and-a-given-element-after-prefix-is-must)
10. [Maximum sum of a path in a Right Number Triangle](#10-maximum-sum-of-a-path-in-a-right-number-triangle)
11. [N digit numbers with digit sum S](#11-n-digit-numbers-with-digit-sum-s)
12. [Path with maximum average value](#12-path-with-maximum-average-value)
13. [Sieve of Eratosthenes Print all prime Numbers till n](#13-sieve-of-eratosthenes)
14. [Size of The Subarray With Maximum Sum](#14-size-of-the-subarray-with-maximum-sum)
15. [Length Of longest Increasing Subsequence  O(NlogN)]()


## 1. [Choice of Area](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Choice%20of%20Area.cpp)

Consider a game, in which you have two types of powers, A and B and there are 3 types of Areas X, Y and Z. Every second you have to switch between these areas, each area has specific properties by which your power A and power B increase or decrease. We need to keep choosing areas in such a way that our survival time is maximized. Survival time ends when any of the powers, A or B reaches less than 0.

## 2. [Count all subsequences having product less than K](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Count%20Smaller%20elements%20to%20right%20O(nlogn).cpp)

Input : [1, 2, 3, 4]<br /> 
        k = 10<br />
Output :11 <br />
The subsequences are {1}, {2}, {3}, {4}, 
{1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4}, 
{1, 2, 3}, {1, 2, 4}<br />

Input  : [4, 8, 7, 2]<br /> 
         k = 50<br />
Output : 9

## 3. [Count Smaller elements to right O(nlogn)](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Largest%20divisible%20pairs%20subset.cpp)

Given an array Arr of size N containing positive integers. Count number of smaller elements on right side of each array.
Example 1:

Input:<br />
N = 7<br />
Arr[] = {12, 1, 2, 3, 0, 11, 4}<br />
Output: 6 1 1 1 0 1 0<br />
Explanation: There are 6 elements right
after 12. There are 1 element right after
1. And so on.<br />
Example 2:

Input:<br />
N = 5<br />
Arr[] = {1, 2, 3, 4, 5}<br />
Output: 0 0 0 0 0<br />
Explanation: There are 0 elements right
after 1. There are 0 elements right after
2. And so on.<br />

Time Complexity: O(N)<br />
Auxiliary Space: O(N*logN)

Constraints:<br />
1 ≤ N ≤ 106<br />
0 <= Arri  <= 108<br\><br />

## 4. [Largest divisible pairs subset](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Largest%20divisible%20pairs%20subset.cpp)

Given an array of n distinct elements, find length of the largest subset such that every pair in the subset is such that the larger element of the pair is divisible by smaller element.

## 5. [Maximize the sum of selected numbers from an array to make it empty](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Maximize%20the%20sum%20of%20selected%20numbers%20from%20an%20array%20to%20make%20it%20empty.cpp)

Given an array of N numbers, we need to maximize the sum of selected numbers. At each step, you need to select a number Ai, delete one occurrence of it and delete all occurrences of Ai-1 and Ai+1 (if they exist) in the array. Repeat these steps until the array gets empty. The problem is to maximize the sum of the selected numbers.
Note: We have to delete all the occureneces of Ai+1 and Ai-1 elements if they are present in the array and not Ai+1 and Ai-1.
Examples: 

Input : a[] = {1, 2, 3} <br />
Output : 4<br />
Explanation: At first step we select 1, so 1 and 
2 are deleted from the sequence leaving us with 3. <br />
Then we select 3 from the sequence and delete it.<br />
So the sum of selected numbers is 1+3 = 4. <br />

Input : a[] =  {1, 2, 2, 2, 3, 4}<br />
Output : 10 <br />
Explanation : Select one of the 2's from the array, so 
2, 2-1, 2+1 will be deleted and we are left with {2, 2, 4}, 
since 1 and 3 are deleted. Select 2 in next two steps, 
and then select 4 in the last step.<br />
We get a sum of 2+2+2+4=10 which is the maximum possible.

## 6. [Maximum number of segments of lengths a, b and c](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Maximum%20number%20of%20segments%20of%20lengths%20a%2C%20b%20and%20c.cpp)

Input : N = 7, a = 5, b, = 2, c = 5 <br />
Output : 2 <br />
N can be divided into 2 segments of lengths
2 and 5. For the second example,

Input : N = 17, a = 2, b = 1, c = 3 <br />
Output : 17 <br />
N can be divided into 17 segments of 1 or 8 
segments of 2 and 1 segment of 1. But 17 segments
of 1 is greater than 9 segments of 2 and 1.

## 7. [Maximum path sum for each position with jumps under divisibility condition](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Maximum%20path%20sum%20for%20each%20position%20with%20jumps%20under%20divisibility%20condition.cpp)

Given an array of n positive integers. Initially we are at first position. We can jump to position y (1 <= y <= n) from position x (1 <= x <= n) if x divides y and x < y. The task is to print maximum sum path ending at every position x.
Note : Since first element is at position 1, we can jump to any position from here as 1 divides all other position numbers.<br />
Examples :<br />
Input :  arr[] = {2, 3, 1, 4, 6, 5}<br />
Output : 2 5 3 9 8 10<br />
Maximum sum path ending with position 1 is 2.<br />
For position 1, last position to visit is 1 only.<br />
So maximum sum for position 1 = 2.

Maximum sum path ending with position 2 is 5.
For position 2, path can be jump from position 1 
to 2 as 1 divides 2.<br />
So maximum sum for position 2 = 2 + 3 = 5.

For position 3, path can be jump from position 1 
to 3 as 1 divides 3.<br />
So maximum sum for position 3 = 2 + 3 = 5.

For position 4, path can be jump from position 1
to 2 and 2 to 4.<br />
So maximum sum for position 4 = 2 + 3 + 4 = 9.<br />

For position 5, path can be jump from position 1 
to 5.<br />
So maximum sum for position 5 = 2 + 6 = 8.

For position 6, path can be jump from position 
1 to 2 and 2 to 6 or 1 to 3 and 3 to 6.<br />
But path 1 -> 2 -> 6 gives maximum sum for
position 6 = 2 + 3 + 5 = 10.

## 8. [Maximum subsequence sum such that no three are consecutive](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Maximum%20subsequence%20sum%20such%20that%20no%20three%20are%20consecutive.cpp)

Given a sequence of positive numbers, find the maximum sum that can be formed which has no three consecutive elements present.
Input: arr[] = {1, 2, 3} <br />
Output: 5 <br />
We can't take three of them, so answer is<br />
2 + 3 = 5 <br />
Input: arr[] = {3000, 2000, 1000, 3, 10}<br />
Output: 5013 <br />
3000 + 2000 + 3 + 10 = 5013 <br />
Input: arr[] = {100, 1000, 100, 1000, 1}<br />
Output: 2101<br />
100 + 1000 + 1000 + 1 = 2101<br />
Input: arr[] = {1, 1, 1, 1, 1}<br />
Output: 4<br />
Input: arr[] = {1, 2, 3, 4, 5, 6, 7, 8}<br />
Output: 27

## 9. [Maximum sum increasing subsequence from a prefix and a given element after prefix is must](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Maximum%20sum%20increasing%20subsequence%20from%20a%20prefix%20and%20a%20given%20element%20after%20prefix%20is%20must.cpp)

Input: arr[] = {1, 101, 2, 3, 100, 4, 5} i-th index = 4 (Element at 4th index is 100) K-th index = 6 (Element at 6th index is 5.) <br />
Output: 11 <br />
Explanation: So we need to calculate the maximum sum of subsequence (1 101 2 3 100 5) such that 5 is necessarily included in the subsequence, so answer is 11 by subsequence (1 2 3 5).<br />

Input: arr[] = {1, 101, 2, 3, 100, 4, 5} i-th index = 2 (Element at 2nd index is 2) K-th index = 5 (Element at 5th index is 4.) <br />
Output: 7 <br />
Explanation: So we need to calculate the maximum sum of subsequence (1 101 2 4) such that 4 is necessarily included in the subsequence, so answer is 7 by subsequence (1 2 4).

## 10. [Maximum sum of a path in a Right Number Triangle](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Maximum%20sum%20of%20a%20path%20in%20a%20Right%20Number%20Triangle.cpp)

Given a right triangle of numbers, find the largest of the sum of numbers that appear on the paths starting from the top towards the base, so that on each path the next number is located directly below or below-and-one-place-to-the-right.

Input : 1<br />
        1 2<br />
        4 1 2<br />
        2 3 1 1<br />        
Output : 9<br />
Explanation : 1 + 1 + 4 + 3<br />
Input : 2<br />
        4 1<br />
        1 2 7<br />
Output : 10<br />
Explanation : 2 + 1 + 7

## 11. [N digit numbers with digit sum S](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/N%20digit%20numbers%20with%20digit%20sum%20S.cpp)

Find out the number of N digit numbers, whose digits on being added equals to a given number S. Note that a valid number starts from digits 1-9 except the number 0 itself. i.e. leading zeroes are not allowed.

Since the answer can be large, output answer modulo 1000000007<br />
N = 2, S = 4<br />
Valid numbers are {22, 31, 13, 40}<br />
Hence output 4

## 12. [Path with maximum average value](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Path%20with%20maximum%20average%20value.cpp)

Given a square matrix of size N*N, where each cell is associated with a specific cost. A path is defined as a specific sequence of cells which starts from the top left cell move only right or down and ends on bottom right cell. We want to find a path with the maximum average over all existing paths. Average is computed as total cost divided by the number of cells visited in the path.
Input : Matrix = [1, 2, 3 <br />
                  4, 5, 6 <br />
                  7, 8, 9]<br />
Output : 5.8 <br />
Path with maximum average is, 1 -> 4 -> 7 -> 8 -> 9<br />
Sum of the path is 29 and average is 29/5 = 5.8

## 13. [Sieve of Eratosthenes](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Sieve%20of%20Eratosthenes.cpp)

Print all Prime numbers less than equal to n 

Input : n =10 <br />
Output : 2 3 5 7 <br />

Input : n = 20 <br />
Output: 2 3 5 7 11 13 17 19 <br />
The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million

## 14. [Size of The Subarray With Maximum Sum](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/Size%20of%20The%20Subarray%20With%20Maximum%20Sum.cpp)

An array is given, find length of the subarray having maximum sum.<br />
Input :  a[] = {1, -2, 1, 1, -2, 1}<br />
Output : Length of the subarray is 2<br />
Explanation: Subarray with consecutive elements <br />
and maximum sum will be {1, 1}. So length is 2

Input : ar[] = { -2, -3, 4, -1, -2, 1, 5, -3 }<br />
Output : Length of the subarray is 5<br />
Explanation: Subarray with consecutive elements <br />
and maximum sum will be {4, -1, -2, 1, 5}.

15. [Length of longest Increasing subsequence](https://github.com/kanti170102041/Code_Bank/blob/main/Dynamic%20Programming/Code/lis.cpp)
The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. For example, the length of LIS for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 and LIS is {10, 22, 33, 50, 60, 80}.
Input: arr[] = {3, 10, 2, 1, 20}<br />
Output: Length of LIS = 3<br />
The longest increasing subsequence is 3, 10, 20

Input: arr[] = {3, 2}<br />
Output: Length of LIS = 1<br />
The longest increasing subsequences are {3} and {2}

Input: arr[] = {50, 3, 10, 7, 40, 80}<br />
Output: Length of LIS = 4<br />
The longest increasing subsequence is {3, 7, 40, 80}
