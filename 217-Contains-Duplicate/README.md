<h2><a href="https://leetcode.com/problems/contains-duplicate">Contains Duplicate</a></h2>
<img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
<hr>
<p>Given an integer array <code>nums</code>, return <code>true</code> if any value appears at least twice in the array, and return <code>false</code> if every element is distinct.</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [1, 2, 3, 1]
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [1, 2, 3, 4]
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
<strong>Output:</strong> true
</pre>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>1 <= nums.length <= 10^5</code></li>
    <li><code>-10^9 <= nums[i] <= 10^9</code></li>
</ul>
<hr>
# Intuition
To determine if any value appears at least twice in the array, we can use a set to track the elements we have seen so far. If we encounter an element that is already in the set, it means the element appears at least twice.

# Approach
1. Initialize an empty set.
2. Iterate through the array.
3. For each element, check if it is in the set:
   - If it is, return true (since we found a duplicate).
   - If it is not, add it to the set.
4. If we finish iterating through the array without finding any duplicates, return false.

# Complexity
- Time complexity: $$O(n)$$, where $$n$$ is the number of elements in the array.
- Space complexity: $$O(n)$$, because we are using a set to store the elements.

 
 