# Longest Common Subsequence
## Dynamic Programming

## Part I. Longest Common Subsequence of Two Sequences
Compute the length of a longest common subsequence of two sequences 𝐴 = (𝑎1, 𝑎2, . . . , 𝑎𝑛) and 𝐵 = (𝑏1, 𝑏2, . . . , 𝑏𝑚), defined as the largest non-negative integer 𝑝 such that there exist indices 1 ≤ 𝑖1 < 𝑖2 < · · · < 𝑖𝑝 ≤ 𝑛 and 1 ≤ 𝑗1 < 𝑗2 < · · · < 𝑗𝑝 ≤ 𝑚, such that 𝑎𝑖1 = 𝑏𝑗1 , . . . , 𝑎𝑖𝑝 = 𝑏𝑗𝑝 .

<strong>Input:</strong> two sequences 𝐴 = (𝑎1, 𝑎2, . . . , 𝑎𝑛) and 𝐵 = (𝑏1, 𝑏2, . . . , 𝑏𝑚)

<strong>Output</strong>: the length of their longest common subsequence

<strong>Input format</strong>
<pre>
First line: 𝑛. 
Second line: 𝑎1, 𝑎2, . . . , 𝑎𝑛. 
Third line: 𝑚. 
Fourth line: 𝑏1, 𝑏2, . . . , 𝑏𝑚. 
Constraints. 1 ≤ 𝑛, 𝑚 ≤ 100; −10^9 < 𝑎𝑖, 𝑏𝑖 < 10^9.
</pre>
<strong>Output Format</strong> 
<pre>
Output 𝑝.
</pre>

<h4>Example 1</h4>
<pre>
Input:
3
2 7 5
2
2 5
Output:
2
</pre>
A common subsequence of length 2 is (2, 5).
<h4>Example 2</h4>
<pre>
Input:
1
7
4
1 2 3 4
Output:
0
</pre>
The two sequences do not share elements.
<h4>Example 3</h4>
<pre>
Input:
4
2 7 8 3
4
5 2 8 7
Output:
2
</pre>
One common subsequence is (2, 7). Another one is (2, 8).


Implement the solution to the LCP2 problem in file `lcp2.c`.

## Part II. Longest Common Subsequence of Three Sequences
Given three sequences 𝐴 = (𝑎1, 𝑎2, . . . , 𝑎𝑛), 𝐵 = (𝑏1, 𝑏2, . . . , 𝑏𝑚), and 𝐶 = (𝑐1, 𝑐2, . . . , 𝑐𝑙), find the
length of their longest common subsequence, i.e., the largest non-negative integer 𝑝 such that there
exist indices 1 ≤ 𝑖1 < 𝑖2 < · · · < 𝑖𝑝 ≤ 𝑛, 1 ≤ 𝑗1 < 𝑗2 < · · · < 𝑗𝑝 ≤ 𝑚, 1 ≤ 𝑘1 < 𝑘2 < · · · < 𝑘𝑝 ≤ 𝑙 such
that 𝑎𝑖1 = 𝑏𝑗1 = 𝑐𝑘1 , . . . , 𝑎𝑖𝑝 = 𝑏𝑗𝑝 = 𝑐𝑘𝑝.

The input and output formats are the same as for the previous problem.

<h4>Example 1</h4>
<pre>
Input:
3
1 2 3
3
2 1 3
3
1 3 5
Output:
2
</pre>
A common subsequence of length 2 is (1, 3).
<h4>Example 1</h4>
<pre>
Input:
5
8 3 2 1 7
7
8 2 1 3 8 10 7
6
6 8 3 1 4 7
Output:
3
</pre>
One common subsequence of length 3 in this case is (8, 3, 7). Another one is (8, 1, 7).

Implement the solution to the LCP3 problem in file `lcp3.c`.
