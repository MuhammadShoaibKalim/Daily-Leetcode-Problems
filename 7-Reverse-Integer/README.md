<h2><a href="https://leetcode.com/problems/reverse-integer">Reverse Integer</a></h2>
<img src='https://img.shields.io/badge/Difficulty-Medium-yellow' alt='Difficulty: Medium' />
<hr>
<p>Given a signed 32-bit integer <code>x</code>, return <code>x</code> with its digits reversed. If reversing <code>x</code> causes the value to go outside the signed 32-bit integer range [-2<sup>31</sup>, 2<sup>31</sup> - 1], then return 0.</p>

<p>Assume the environment does not allow you to store 64-bit integers (signed or unsigned).</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> x = 123
<strong>Output:</strong> 321
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> x = -123
<strong>Output:</strong> -321
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> x = 120
<strong>Output:</strong> 21
</pre>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>-2<sup>31</sup> <= x <= 2<sup>31</sup> - 1</code></li>
</ul>
<hr>
# Intuition
To reverse the digits of an integer, we need to handle each digit one by one and construct the reversed number. However, we must be careful of integer overflow.

# Approach
1. **Extract Digits**: Continuously extract the last digit of the number using `x % 10` and reduce the number by `x / 10`.
2. **Construct Reversed Number**: Use the extracted digits to construct the reversed number.
3. **Handle Overflow**: Before appending a digit, check if the new number will cause overflow. If it will, return 0.

# Complexity
- Time complexity: $$O(\log_{10} n)$$, where $$n$$ is the absolute value of the input integer.
- Space complexity: $$O(1)$$, since we are using a constant amount of extra space.

