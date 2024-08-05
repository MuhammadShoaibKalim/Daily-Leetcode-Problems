<h2>Special Array</h2>
<hr>
<p>An array is considered special if every pair of its adjacent elements contains two numbers with different parity.</p>

<p>You are given an array of integers <code>nums</code>. Return <code>true</code> if <code>nums</code> is a special array, otherwise, return <code>false</code>.</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [1]
<strong>Output:</strong> true
<strong>Explanation:</strong>
There is only one element. So the answer is true.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [2, 1, 4]
<strong>Output:</strong> true
<strong>Explanation:</strong>
There are only two pairs: (2, 1) and (1, 4), and both of them contain numbers with different parity. So the answer is true.
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> nums = [4, 3, 1, 6]
<strong>Output:</strong> false
<strong>Explanation:</strong>
nums[1] and nums[2] are both odd. So the answer is false.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>1 <= nums.length <= 100</code></li>
    <li><code>1 <= nums[i] <= 100</code></li>
</ul>
<hr>
# Intuition
We need to check if every pair of adjacent elements in the array has different parity. Two numbers have different parity if one is odd and the other is even.

# Approach
1. Iterate through the array from the first element to the second last element.
2. For each element, check if it has a different parity compared to the next element.
3. If any pair of adjacent elements have the same parity, return false.
4. If we complete the iteration without finding any pair with the same parity, return true.

# Complexity
- Time complexity: $$O(n)$$, where $$n$$ is the number of elements in the array.
- Space complexity: $$O(1)$$, as we are using a constant amount of extra space.


