#!/usr/bin/python3
# 7-add_tuple.py

def add_tuple(tuple_a=(0, 0), tuple_b=(0, 0)):
    """
    Add two tuples.

    Parameters:
    - tuple_a: A tuple of integers.
    - tuple_b: Another tuple of integers.

    Returns:
    A new tuple containing the element-wise sum of input tuples.
    """
    # Ensure tuples have at least two elements
    tuple_a = tuple_a + (0, 0)[:2 - len(tuple_a)]
    tuple_b = tuple_b + (0, 0)[:2 - len(tuple_b)]

    # Calculate the sum of corresponding elements
    result = (tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1])

    return result
