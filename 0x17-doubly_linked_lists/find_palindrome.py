#!/usr/bin/python3
def is_palindrome(num):
    return str(num) == str(num)[::-1]

def find_largest_palindrome():
    max_palindrome = 0
    for i in range(100, 1000):
        for j in range(i, 1000):  # Start from i to avoid repeated pairs
            product = i * j
            if is_palindrome(product) and product > max_palindrome:
                max_palindrome = product
    return max_palindrome

# Find the largest palindrome and save to file
largest_palindrome = find_largest_palindrome()

with open('102-result', 'w') as file:
    file.write(str(largest_palindrome))