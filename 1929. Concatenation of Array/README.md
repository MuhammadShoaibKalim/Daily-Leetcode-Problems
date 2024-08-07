<h2><a href="https://example.com/problems/concatenate-array">Concatenate Array</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr>
<p>Given an integer array <code>nums</code> of length <code>n</code>, you want to create an array <code>ans</code> of length <code>2n</code> where <code>ans[i] == nums[i]</code> and <code>ans[i + n] == nums[i]</code> for <code>0 <= i < n</code> (0-indexed).</p>
<p>Specifically, <code>ans</code> is the concatenation of two <code>nums</code> arrays.</p>
<p>Return the array <code>ans</code>.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,2,1]
<strong>Output:</strong> [1,2,1,1,2,1]
<strong>Explanation:</strong> The array <code>ans</code> is formed as follows:
- <code>ans</code> = [nums[0], nums[1], nums[2], nums[0], nums[1], nums[2]]
- <code>ans</code> = [1,2,1,1,2,1]
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,3,2,1]
<strong>Output:</strong> [1,3,2,1,1,3,2,1]
<strong>Explanation:</strong> The array <code>ans</code> is formed as follows:
- <code>ans</code> = [nums[0], nums[1], nums[2], nums[3], nums[0], nums[1], nums[2], nums[3]]
- <code>ans</code> = [1,3,2,1,1,3,2,1]
</pre>
<p><strong>Constraints:</strong></p>
<ul>
    <li><code>n == nums.length</code></li>
    <li><code>1 <= n <= 1000</code></li>
    <li><code>1 <= nums[i] <= 1000</code></li>
</ul>
<p>&nbsp;</p>