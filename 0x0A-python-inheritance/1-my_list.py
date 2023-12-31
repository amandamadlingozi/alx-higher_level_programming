#!/usr/bin/python3
''' Module: 1-my_list
'''


class MyList(list):
    """Inherits from list and adds a public method to print the sorted list."""

    def print_sorted(self):
        """Prints the sorted list."""
        print(sorted(self))
