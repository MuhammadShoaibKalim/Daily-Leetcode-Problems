<h2><a href="https://leetcode.com/problems/find-lucky-integer-in-an-array">1394. Find Lucky Integer in an Array</a></h2>
<img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
<hr>
<p>Given an array of integers <code>arr</code>, a lucky integer is an integer that has a frequency in the array equal to its value.</p>

<p>Return the largest lucky integer in the array. If there is no lucky integer return <code>-1</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> arr = [2, 2, 3, 4]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The only lucky number in the array is 2 because frequency[2] == 2.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> arr = [1, 2, 2, 3, 3, 3]
<strong>Output:</strong> 3
<strong>Explanation:</strong> 1, 2, and 3 are all lucky numbers, return the largest of them.
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> arr = [2, 2, 2, 3, 3]
<strong>Output:</strong> -1
<strong>Explanation:</strong> There are no lucky numbers in the array.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>1 <= arr.length <= 500</code></li>
    <li><code>1 <= arr[i] <= 500</code></li>
</ul>
<hr>
# Intuition
We need to find an integer in the array that has a frequency equal to its value and return the largest such integer. If no such integer exists, we return -1.

# Approach
1. Use a hash map to count the frequency of each element in the array.
2. Iterate through the hash map and find the largest key that has a value equal to the key.
3. Return the largest lucky integer found, or -1 if none are found.

# Complexity
- Time complexity: $$O(n)$$, where $$n$$ is the number of elements in the array.
- Space complexity: $$O(n)$$, due to the hash map storage.


