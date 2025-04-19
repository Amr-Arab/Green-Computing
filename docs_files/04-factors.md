# Example 3: Factors Calculation Optimization

## Brute Force – O(n)

Iterates from 1 to n, checking if each number is a factor. Very slow for large values.

## Square Root Optimization – O(sqrt(n))

Checks up to sqrt(n). For each divisor found, adds both `i` and `n/i` to the list.

**Benefits:**
- Cuts computation time dramatically
- Reduces system load
- Better for embedded systems and large-scale apps

### Optimization Impact
Halves the number of checks, and works especially well with large numbers.
