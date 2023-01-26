# Sort

We sometimes need to arrange some data in (ascending or descending) order. 
**Sort** functions need to do it. 

- `O(n^2)` Sorts (stable)
	
	- select sort
	- bubble sort
	- insert sort

- `O(nlogn)` Sorts

	- quick sort (unstable)
	- merge sort (stable)
		- 2-way & n-way
	- heap sort (unstable)
	- tree sort (unstable)

- Special Sorts

	- shell sort `O(n^1.25)` (unstable)
	- radix sort `O(n)` (stable)
	- counting sort	`max(O(n), O(k))` (stable)

## Divide and Conquer

We must use **Dynamic Programming** and **Divide and Conquer** to make effecient programs.

**Note:** We must use these concepts to process quick sort and merge sort.

## algorithm, STL

We can use functions about sort and vector, etc. through **algorithm** library.