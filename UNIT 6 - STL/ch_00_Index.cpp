/*
    1. Containers are data structures that store and manage elements in a specific way. 
       Some commonly used containers are:

        - vector: Dynamic array
        - list: Doubly-linked list
        - deque: Double-ended queue
        - set: Ordered set of unique elements
        - map: Collection of key-value pairs, where keys are unique
        - unordered_set: Unordered set of unique elements
        - unordered_map: Unordered collection of key-value pairs

    2. The Standard Template Library (STL) provides a rich set of algorithms that operate on various 
       containers. These algorithms allow you to perform common tasks efficiently, such as searching, sorting, 
       manipulating elements, and more. The algorithms are implemented as template functions, which means they
       can work with different container types, including arrays, vectors, lists, and more.

       Here are some of the commonly used algorithms available in the C++ STL:

       - Sorting Algorithms:
            std::sort: Sorts elements in a range (e.g., vector) in ascending order.
            std::stable_sort: Sorts elements in a stable way, preserving the relative order of elements with equal values.
            std::partial_sort: Partially sorts the elements up to a specified position.

       - Searching Algorithms:
            std::find: Searches for an element in a range (e.g., vector).
            std::binary_search: Checks if an element exists in a sorted range.
            std::lower_bound and std::upper_bound: Find the lower and upper bounds of a value in a sorted range.

       - Element Manipulation:
            std::fill: Fills a range with a specific value.
            std::fill_n: Fills a specified number of elements with a value.
            std::copy: Copies elements from one range to another.

       - Numeric Algorithms:
            std::accumulate: Computes the sum of elements in a range.
            std::transform: Applies a function to each element in a range and stores the result in another container.
            std::inner_product: Computes the inner product of two ranges.

       - Set Operations:
            std::set_union: Computes the union of two sorted ranges.
            std::set_intersection: Computes the intersection of two sorted ranges.
            std::set_difference: Computes the difference of two sorted ranges.
            std::set_symmetric_difference: Computes the symmetric difference of two sorted ranges.

       - Heap Operations:
            std::make_heap: Converts a range into a max-heap.
            std::push_heap: Adds an element to a max-heap.
            std::pop_heap: Removes the largest element from a max-heap.    
*/