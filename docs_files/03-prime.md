# Example 2: Prime Checking Optimization

## Brute Force – O(n)

Checks every number from 2 to (n - 1) to see if it's divisible. Very inefficient for large inputs.

## Square Root Optimization – O(sqrt(n))

Only checks up to `sqrt(n)`, because any larger factor would have a smaller counterpart already found.

**Benefits:**
- Fewer iterations
- Faster computation
- Less CPU stress

###  Impact
Big performance gain with minimal code change. Useful in computationally intensive systems.
