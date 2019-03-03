# Longest Common Subsequence
## Dynamic Programming

## Part I. Longest Common Subsequence of Two Sequences
Compute the length of a longest common subsequence of two sequences 𝐴 = (𝑎<sub>1</sub>, 𝑎<sub>2</sub>, . . . , 𝑎<sub>n</sub>) and 𝐵 = (𝑏<sub>1</sub>, 𝑏<sub>2</sub>, . . . , 𝑏<sub>m</sub>), defined as the largest non-negative integer 𝑝 such that there exist indices 1 ≤ 𝑖<sub>1</sub> < 𝑖<sub>2</sub> < · · · < 𝑖<sub>p</sub> ≤ 𝑛 and 1 ≤ 𝑗<sub>1</sub> < 𝑗<sub>2</sub> < · · · < 𝑗<sub>p</sub> ≤ 𝑚, such that 𝑎<sub>i1</sub> = 𝑏<sub>j1</sub> , . . . , 𝑎<sub>ip</sub> = 𝑏<sub>jp</sub> .

<strong>Input:</strong> two sequences 𝐴 and 𝐵 of lengths *n* and *m* respectively.

<strong>Output</strong>: the length *p* of their longest common subsequence

<strong>Input format</strong>
<pre>
First line: 𝑛. 
Second line: 𝑎1, 𝑎2, . . . , 𝑎𝑛. 
Third line: 𝑚. 
Fourth line: 𝑏1, 𝑏2, . . . , 𝑏𝑚. 
Constraints. 1 ≤ 𝑛, 𝑚 ≤ 100; −2<sup>9</sup> < 𝑎𝑖, 𝑏𝑖 < 2<sup>9</sup>.
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
Given three sequences 𝐴 = (𝑎<sub>1</sub>, 𝑎<sub>2</sub>, . . . , 𝑎<sub>n</sub>), 𝐵 = (b<sub>1</sub>, b<sub>2</sub>, . . . , b<sub>m</sub>), and 𝐶 = (c<sub>1</sub>, c<sub>2</sub>, . . . , c<sub>l</sub>), find the length of their longest common subsequence, i.e., the largest non-negative integer 𝑝 such that there exist indices 1 ≤ 𝑖<sub>1</sub> < 𝑖<sub>2</sub> < · · · < 𝑖<sub>p</sub> ≤ 𝑛, 1 ≤ 𝑗<sub>1</sub> < 𝑗<sub>2</sub> < · · · < 𝑗<sub>p</sub> ≤ 𝑚, 1 ≤ 𝑘<sub>1</sub> < 𝑘<sub>2</sub> < · · · < 𝑘<sub>p</sub> ≤ 𝑙 such that 𝑎<sub>i1</sub> = 𝑏<sub>j1</sub> = 𝑐<sub>k1</sub> , . . . , 𝑎<sub>ip</sub> = 𝑏<sub>jp</sub> = 𝑐<sub>kp</sub>.

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
