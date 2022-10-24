def longest_substring(text: str) -> int:
    """Find the longest substring without repeating characters."""
    temp: str = ""
    longest: str = ""
    for char in text:
        if char not in temp:
            temp += char  # Add the character to the temporary string if not already present
        else:
            temp = char  # If the character is already present, reset the temporary string
        if len(temp) > len(longest):
            longest = temp  # Update the longest substring if the temporary string is longer
    return len(longest)


s = str(input("Enter a string: "))
print(longest_substring(s))
